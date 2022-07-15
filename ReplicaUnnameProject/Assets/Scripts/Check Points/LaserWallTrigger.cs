using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserWallTrigger : MonoBehaviour
{
    public int triggerID;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            EventManager.LaserWallEvent(triggerID);

            //Character character = other.GetComponent<Character>();
        }
    }
}
