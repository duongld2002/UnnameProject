using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum PlayerState
{
    Idle, Run, Die, Win, Lose
}

public enum AttackState
{
    None, MeleeAttack, RangeAttack
}

public class Character : MonoBehaviour
{
    public GameState gameState;
    public PlayerState playerState;
    public AttackState attackState;
    public LevelState levelState;

    //Draw movement
    public PathCreator pathCreator;
    public PathMover pathMover;

    //Shield
    public GameObject bubbleShield;

    private Animator animator;
    public SkinnedMeshRenderer[] renderers;

    //Character attack range
    public float range;
    public CapsuleCollider attackRange, playerCollider;

    //Character health
    [Header("Health")]
    public int currentHealth;
    public int maxHealth = 3;
    [SerializeField]
    private ProgressBar healthBar;

    private Enemy targetEnemy;

    GameObject[] gos;
    public int enemyCount;

    public TimeManager timeManager;

    private void Start()
    {

        currentHealth = maxHealth;

        animator = GetComponent<Animator>();
        renderers = GetComponentsInChildren<SkinnedMeshRenderer>();
        playerCollider = GetComponent<CapsuleCollider>();

        gos = GameObject.FindGameObjectsWithTag("Enemy");
        enemyCount = gos.Length;
    }

    private void Update()
    {
        switch(playerState)
        {
            case PlayerState.Idle:
                animator.SetBool("IsRun", false);
                break;
            case PlayerState.Run:
                animator.SetBool("IsRun", true);
                break;
            case PlayerState.Die:
                pathMover.pathPoints.Clear();
                playerCollider.enabled = false;
                animator.SetBool("IsAttack", true);
                animator.SetFloat("Blend", 3);
                break;
            case PlayerState.Lose:
                animator.SetBool("IsAttack", true);
                animator.SetFloat("Blend", 4);
                break;
            case PlayerState.Win:
                animator.SetBool("IsAttack", true);
                animator.SetFloat("Blend", 5);
                break;
        }

        switch (attackState)
        {
            case AttackState.None:
                range = 0.5f;
                break;
            case AttackState.MeleeAttack:
                range = 2;
                break;
            case AttackState.RangeAttack:
                range = 5;
                break;
        }

        if (enemyCount <= 0)
        {
            pathMover.pathPoints.Clear();
            levelState = LevelState.Pass;
        }

        attackRange.radius = range;

    }

    private void OnTriggerEnter(Collider other)
    {
        //if(other.CompareTag("Enemy"))
        if (other.TryGetComponent<Enemy>(out Enemy enemy))
        {
            //SetTarget(enemy);
            switch (attackState)
            {
                case AttackState.None:
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.MeleeAttack:
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.RangeAttack:
                    animator.SetBool("IsAttack", true);
                    animator.SetFloat("Blend", 2f);
                    break;
            }
        }
    }   

    //Change from attack anim to run anim
    public void fromAttackToRun()
    {
        animator.SetBool("IsAttack", false);
    }

    //Take damage from enemy projectile 
    public void TakeDamage(int amount)
    {
        currentHealth -= amount;

        healthBar.SetProgress(currentHealth / maxHealth, 3);

        if (currentHealth <= 0)
            playerState = PlayerState.Die;
    }

    public void SetupHealthBar(Canvas canvas, Camera camera)
    {
        healthBar.transform.SetParent(canvas.transform);
    }

    //Not sure what this can do yet, maybe never use this one
    //public void SetTarget(Enemy targetEnemy)
    //{
    //    this.targetEnemy = targetEnemy;
    //}

    //Start Slow-mo
    public void StartSlowMo()
    {
        timeManager.DoSlowMotion();
    }
}

