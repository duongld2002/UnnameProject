using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Laser : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Character character = other.GetComponent<Character>();
            character.currentHealth = 0;
            character.pathCreator.points.Clear();
            character.playerState = PlayerState.Shock;
            //EffectManager.Instance.SpawnBloodPoolEffect(transform.position);
        }
    }
}
