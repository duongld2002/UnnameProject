using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Obstacles : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Character character = other.GetComponent<Character>();
            character.currentHealth = 0;
            character.pathCreator.points.Clear();
            character.playerState = PlayerState.Die;
        }
    }
}
