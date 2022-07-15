using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CheckPointTrigger : MonoBehaviour
{
    public int triggerID;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            EventManager.StartCheckPointEvent(triggerID);

            //Character character = other.GetComponent<Character>();
            //character.gameState = GameState.NotStart;
            //character.pathMover.pathPoints.Clear();

            //character.pathCreator.points.Clear();

            //CameraManager.Instance.changeCameraDraw();
           
        }
    }
}
