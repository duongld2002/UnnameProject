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
            character.TakeDamage(1);
        }
    }
}
