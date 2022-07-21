using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Boss : MonoBehaviour
{
    Animator animator;
    CapsuleCollider capsuleCollider;
    public EnemyState enemyState;

    //public GameObject gun;

    //[SerializeField]
    //GameObject FOV;
    [SerializeField]
    GameObject player;
    [SerializeField]
    Character character;
    //[SerializeField]
    //FieldOfView fieldOfView;

    public float currentHealth;
    public float maxHealth;
    //[SerializeField]
    //ProgressBarPro progressBarPro;

    public float waitTime;
    private float currentTime;
    private bool shot;
    public bool isAlive;

    [Header("Bullet Settings")]
    [SerializeField, Tooltip("Bullet Prefab to Shoot")]
    private GameObject bullet;
    [SerializeField, Tooltip("Bullet Direction and Position to Shoot in")]
    private GameObject bulletDirection;
    //public GameObject muzzleFlash;

    [SerializeField]
    private Pooler bulletPool;
    GameObject[] h;

    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player");

        character = player.GetComponent<Character>();
        animator = GetComponent<Animator>();
        capsuleCollider = GetComponent<CapsuleCollider>();

        currentHealth = maxHealth;
        isAlive = true;
    }

    void Update()
    {

        transform.LookAt(player.transform);
        //bulletDirection.LookAt(player.transform);

        if (isAlive)
            performShoot();

        //switch(enemyState)
        //{
        //    case EnemyState.Idle:
        //        animator.SetBool("IsFighting", false);
        //        break;
        //    case EnemyState.Attack:
        //        animator.SetBool("IsFighting", true);
        //        performShoot();
        //        break;
        //    case EnemyState.Die:
        //        animator.SetBool("IsAssassin", true);
        //        break;
        //}
    }

    public void Disappear()
    {
        this.gameObject.SetActive(false);
    }

    public void DecreaseEnemy()
    {
        capsuleCollider.enabled = false;
        //fieldOfView.enabled = false;
        //FOV.SetActive(false);
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

        //GameObject g = bulletPool.GetObject();
        //g.transform.position = bulletDirection.position;

        //g.transform.rotation = bulletDirection.rotation;
        //g.transform.rotation = Quaternion.AngleAxis(-30, transform.up) * bulletDirection.rotation;

        int n = 7;
        var startAngle = -Mathf.FloorToInt((n - 1) / 2) * 3;
        for (var i = 0; i < n; i++, startAngle += 3)
        {
            GameObject g = bulletPool.GetObject();
            g.transform.position = bulletDirection.transform.position;
            g.transform.rotation = Quaternion.AngleAxis(startAngle, transform.up) * bulletDirection.transform.rotation;
            g.SetActive(true);
        }

        //g.SetActive(true);
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
            TakeDamage(1);
        }
    }

    public void TakeDamage(float amount)
    {
        currentHealth -= amount;
        //UpdateHealthBar();

        if (currentHealth <= 0)
        {
            animator.SetBool("IsAssassin", true);
            isAlive = false;
            //bulletDirection.SetActive(false);
            //gameObject.SetActive(false);
        }
    }

    //Health Bar
    //private void UpdateHealthBar()
    //{
    //    progressBarPro.SetValue(currentHealth, maxHealth);
    //}
}
