using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed;
    public float maxDistance;

    public Pooler pool;

    private void Start()
    {
        pool = transform.parent.GetComponent<Pooler>();
    }

    private void OnEnable()
    {
        StartCoroutine(DestroyBulletAfterTime());
    }

    IEnumerator DestroyBulletAfterTime()
    {
        yield return new WaitForSeconds(3f);
        pool.ReturnObject(gameObject);
    }

    void Update()
    {
        //Move the bullet in its forward direction * speed;
        transform.Translate(Vector3.forward * Time.deltaTime * speed);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Character character = other.GetComponent<Character>();
            character.TakeDamage(1);
            Debug.Log("Hit");
            pool.ReturnObject(gameObject);
        }
    }

}
