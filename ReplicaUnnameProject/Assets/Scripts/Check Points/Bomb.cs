using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bomb : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Character character = other.GetComponent<Character>();
            //character.currentHealth = 0;
            character.playerState = PlayerState.Die;
            character.pathCreator.points.Clear();
            //character.playerState = PlayerState.Shock;
            EffectManager.Instance.SpawnBombExplosionEffect(transform.position);

            gameObject.SetActive(false);
        }
    }
}
