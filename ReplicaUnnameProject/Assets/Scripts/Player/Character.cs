using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public enum PlayerState
{
    Idle, Run, Die, Win, Lose, Shock
}

public enum AttackState
{
    None, MeleeAttack, RangeAttack, Hammer
}

public class Character : MonoBehaviour
{
    //Character data
    [SerializeField]
    CharacterData characterData;

    public GameState gameState;
    public PlayerState playerState;
    public AttackState attackState;
    public LevelState levelState;

    //Draw movement
    public PathCreator pathCreator;
    public PathMover pathMover;

    //Draw field of view
    [SerializeField] FieldOfViewPlayer FOVP;

    //Shield
    //public GameObject bubbleShield;

    private Animator animator;
    //public SkinnedMeshRenderer[] renderers;
    public SkinnedMeshRenderer renderer;
    public Material shockedMAT;

    //Character attack range
    [Header("Attack Range")]
    public float range;
    public float attackAngle;
    public CapsuleCollider attackRange, playerCollider;

    //Character health
    [Header("Health")]
    public float currentHealth;
    public float maxHealth;
    //[SerializeField]
    //ProgressBarPro progressBarPro;

    //Perform Shoot
    [Header("Gun Shoot")]
    public float waitTime;
    private float currentTime;
    private bool shot;
    [Header("Bullet Settings")]
    [SerializeField, Tooltip("Bullet Prefab to Shoot")]
    private GameObject bullet;
    [SerializeField, Tooltip("Bullet Direction and Position to Shoot in")]
    public Transform bulletDirection;

    [SerializeField]
    private Pooler bulletPool;

    private Enemy targetEnemy;

    GameObject[] gos;
    public int enemyCount;

    private void Awake()
    {
        //Get data from scriptableobject
        range = characterData.attackRange;
        attackAngle = characterData.attackAngle;
    }

    private void Start()
    {
        //Get data from scriptableobject
        maxHealth = characterData.health;

        currentHealth = maxHealth;

        animator = GetComponent<Animator>();
        //renderers = GetComponentsInChildren<SkinnedMeshRenderer>();
        renderer = GetComponentInChildren<SkinnedMeshRenderer>();

        playerCollider = GetComponent<CapsuleCollider>();

        //UpdateHealthBar();

        gos = GameObject.FindGameObjectsWithTag("Enemy");
        enemyCount = gos.Length;

        bulletPool = GetComponentInChildren<Pooler>();
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
                pathMover.canMove = false;
                playerCollider.enabled = false;
                //pathMover.pathPoints.Clear();
                animator.SetBool("IsAttack", true);
                animator.SetFloat("Blend", 3);
                break;
            case PlayerState.Shock:
                pathMover.canMove = false;
                playerCollider.enabled = false;
                renderer.material = shockedMAT;
                //pathMover.pathPoints.Clear();
                animator.SetBool("IsAttack", true);
                animator.SetFloat("Blend", 6);
                break;
            case PlayerState.Lose:
                pathMover.canMove = false;
                pathMover.pathPoints.Clear();
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
                range = 1f;
                break;
            case AttackState.MeleeAttack:
                range = 2f;
                FOVP.DrawFieldOfView();
                break;
            case AttackState.RangeAttack:
                range = 5f;
                FOVP.DrawFieldOfView();
                break;
        }

        //if (enemyCount <= 0)
        //{
        //    //pathMover.pathPoints.Clear();
        //    levelState = LevelState.Pass;
        //}

        attackRange.radius = range;

        //if (attackState == AttackState.RangeAttack)
        //    attackRange.radius = 0.5f;
    }

    private void OnTriggerEnter(Collider other)
    {
        
        //if(other.CompareTag("Enemy"))
        if (other.TryGetComponent<Enemy>(out Enemy enemy))
        {
            //transform.LookAt(enemy.transform);
            pathMover.canMove = false;
            //SetTarget(enemy);
            switch (attackState)
            {
                case AttackState.None:
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.MeleeAttack:
                    animator.SetFloat("Blend", 2f);
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.RangeAttack:
                    animator.SetBool("IsAttack", true);
                    break;
            }
        }

        else if (other.TryGetComponent<EnemyMelee>(out EnemyMelee enemyMelee))
        {
            //transform.LookAt(enemyMelee.transform);
            pathMover.canMove = false;
            //SetTarget(enemy);
            switch (attackState)
            {
                case AttackState.None:
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.MeleeAttack:
                    animator.SetBool("IsAttack", true);
                    animator.SetFloat("Blend", 2f);
                    break;
                case AttackState.RangeAttack:
                    animator.SetBool("IsAttack", true);
                    break;
            }
        }

        else if (other.TryGetComponent<Boss>(out Boss boss))
        {
            //transform.LookAt(boss.transform);
            pathMover.canMove = false;
            //SetTarget(enemy);
            switch (attackState)
            {
                case AttackState.None:
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.MeleeAttack:
                    animator.SetFloat("Blend", 2f);
                    animator.SetBool("IsAttack", true);
                    break;
                case AttackState.RangeAttack:
                    animator.SetBool("IsAttack", true);
                    break;
            }
        }
    }

    //private void OnCollisionEnter(Collision collision)
    //{
    //    Debug.Log("Collision");
    //    if (collision.gameObject.CompareTag("Bullet"))
    //    {
    //        TakeDamage(1);
    //    }
    //}

    //Change from attack anim to run anim
    public void fromAttackToRun()
    {
        pathMover.canMove = true;
        animator.SetBool("IsAttack", false);
    }

    //Take damage from enemy projectile 
    public void TakeDamage(float amount)
    {
        currentHealth -= amount;
        //UpdateHealthBar();

        if (currentHealth <= 0)
        {
            pathMover.pathPoints.Clear();
            playerState = PlayerState.Die;
        }
    }

    //Health Bar
    //private void UpdateHealthBar()
    //{
    //    progressBarPro.SetValue(currentHealth, maxHealth);
    //}

    //Character die
    void OnDie()
    {
        gameObject.SetActive(false);
    }

    //Not sure what this can do yet, maybe never use this one
    //public void SetTarget(Enemy targetEnemy)
    //{
    //    this.targetEnemy = targetEnemy;
    //}

    //Start Slow-mo
    public void StartSlowMo()
    {
        TimeManager.Instance.DoSlowMotion();
    }

    public void performShoot()
    {
        if (currentTime == 0)
            Shoot();

        if (shot && currentTime < waitTime)
            currentTime += 1 * Time.deltaTime;

        if (currentTime >= waitTime)
            currentTime = 0;
    }

    public void Shoot()
    {
        shot = true;

        EffectManager.Instance.SpawnFireBulletSound();

        GameObject g = bulletPool.GetObject();
        g.transform.position = bulletDirection.position;
        g.transform.rotation = bulletDirection.rotation;
        g.SetActive(true);
    }

}

