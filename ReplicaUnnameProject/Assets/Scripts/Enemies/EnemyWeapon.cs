using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyWeapon : MonoBehaviour
{
    public Character character;

    private void Awake()
    {
        character = GameObject.FindGameObjectWithTag("Player").GetComponent<Character>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag("Player"))
        {
            Debug.Log("Trigger");
            EffectManager.Instance.SpawnBloodSplashEffect(other.gameObject.GetComponent<Collider>().ClosestPointOnBounds(transform.position));
            character.TakeDamage(1);
        }
    }
}
