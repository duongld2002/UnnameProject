using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum EnemyState
{
    Idle, Attack, Die
}

public class Enemy : MonoBehaviour
{
    //Enemy Renderer
    public SkinnedMeshRenderer renderer;
    public Material[] materials;

    //Character Data
    [SerializeField]
    CharacterData enemyData;

    Animator animator;

    CapsuleCollider capsuleCollider;
    public GameObject weapon;

    public EnemyState enemyState;

    //public GameObject gun;

    [SerializeField]
    GameObject FOV;
    [SerializeField]
    Character character;
    [SerializeField]
    FieldOfView fieldOfView;
    public float attackRange, attackAngle;

    //Health
    public float health = 1;
    public bool isAlive;

    //Shooting
    public float waitTime;
    private float currentTime;
    private bool shot;

    //Bullet
    [Header("Bullet Settings")]
    [SerializeField, Tooltip("Bullet Prefab to Shoot")]
    private GameObject bullet;
    [SerializeField, Tooltip("Bullet Direction and Position to Shoot in")]
    private Transform bulletDirection;
    //public GameObject muzzleFlash;
    [SerializeField]
    private Pooler bulletPool;

    private void Awake()
    {
        attackRange = enemyData.attackRange;
        attackAngle = enemyData.attackAngle;
    }

    void Start()
    {
        renderer = GetComponentInChildren<SkinnedMeshRenderer>();

        isAlive = true;

        character = FindObjectOfType<Character>().GetComponent<Character>();

        animator = GetComponent<Animator>();
        capsuleCollider = GetComponent<CapsuleCollider>();

        bulletPool = GetComponentInParent<Pooler>();
    }

    void Update()
    {
        switch(enemyState)
        {
            case EnemyState.Idle:
                animator.SetBool("IsFighting", false);
                break;
            case EnemyState.Attack:
                animator.SetBool("IsFighting", true);
                if (isAlive)
                    performShoot();
                break;
            case EnemyState.Die:
                animator.SetBool("IsAssassin", true);
                isAlive = false;
                break;
        }
    }

    public void Disappear()
    {
        this.gameObject.SetActive(false);
    }

    public void DecreaseEnemy()
    {
        capsuleCollider.enabled = false;
        fieldOfView.enabled = false;
        FOV.SetActive(false);
        character.enemyCount--;
    }

    public void performShoot()
    {
        //gun.transform.localPosition = new Vector3();

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
        //muzzleFlash.SetActive(true);
        //StartCoroutine(wait());

        GameObject g = bulletPool.GetObject();
        g.transform.position = bulletDirection.position;
        g.transform.rotation = bulletDirection.rotation;
        g.SetActive(true);
    }

    //IEnumerator wait()
    //{
    //    yield return new WaitForSeconds(0.05f);
    //    muzzleFlash.SetActive(false);
    //}

    private void OnTriggerEnter(Collider other)
    {
       if (other.CompareTag("Bullet"))
       {
            weapon.SetActive(false);
            EffectManager.Instance.SpawnHitBloodSplashEffect(other.gameObject.GetComponent<Collider>().ClosestPointOnBounds(transform.position));
            //enemyState = EnemyState.Die;
            animator.enabled = false;
            renderer.material = materials[1];
            health = 0;
            DecreaseEnemy();
        }
       else if (other.CompareTag("Hammer"))
        {
            health = 0;
            //enemyState = EnemyState.Die;
            EffectManager.Instance.SpawnBloodPoolEffect(transform.position);
            EffectManager.Instance.SpawnWideBloodSplashEffect(transform.position);
            DecreaseEnemy();
            Disappear();
        }
        else if (other.CompareTag("Goal"))
        {
            Debug.Log("Ice");
            renderer.material = materials[0];
            health = 0;
            DecreaseEnemy();
        }
    }
}
