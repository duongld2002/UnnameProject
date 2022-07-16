using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    [SerializeField] float _ProjectileSpeed;
    [SerializeField] GameObject _HitEffect;
    Vector3 _hitNormal;
    Vector3 _hitPos;
    Ray ray;
    RaycastHit hit;

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
        Vector3 delta = (transform.forward * _ProjectileSpeed * Time.deltaTime);
        transform.position += delta;
        ray = new Ray(transform.position,transform.forward);
        if(Physics.Raycast(ray,out hit))
        {
            _hitNormal = hit.normal;
            _hitPos = hit.point;
            float distance = (transform.position - hit.point).magnitude;
            if(distance < delta.magnitude)
            {
                Hit(hit.collider);
            }
        }
    }

    void Hit(Collider collider)
    {
        GameObject hit = Instantiate(_HitEffect, _hitPos, Quaternion.identity);
        EffectManager.Instance.SpawnBloodSplashEffect(_hitPos);

        Shield shield = collider.GetComponentInParent<Shield>();
        if (shield != null)
        {
            shield.HitShield(_hitPos);
        }
        hit.transform.forward = _hitNormal;
        pool.ReturnObject(gameObject);

        if (collider.CompareTag("Wall"))
        {
            Wall wall = collider.GetComponent<Wall>();
            wall.TakeDamage(1);
            pool.ReturnObject(gameObject);
        }

        if (collider.CompareTag("Player"))
        {
            Character character = collider.GetComponent<Character>();
            character.TakeDamage(1);
            pool.ReturnObject(gameObject);
        }

        

        //if (collider.CompareTag("Item"))
        //{
        //    Physics.IgnoreCollision(collider, gameObject.GetComponent<Collider>(), false);
        //    Debug.Log("Ignore");
        //}
    }
}
