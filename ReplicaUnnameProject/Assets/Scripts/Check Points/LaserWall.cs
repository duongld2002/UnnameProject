using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserWall : MonoBehaviour
{
    public GameObject laserWall;
    public GameObject[] laserLines;
    public int laserWallID;

    void Start()
    {
        EventManager.DisableLaserWall += activeChkPoint;
    }

    private void activeChkPoint(int triggerID)
    {
        if (triggerID == laserWallID)
        {
            laserWall.GetComponent<Collider>().enabled = false;

            foreach(var laser in laserLines)
            {
                laser.SetActive(false);
            }

            Debug.Log(laserWall);
            Debug.Log("WTF");
        }
    }

    private void OnDisable()
    {
        EventManager.DisableLaserWall -= activeChkPoint;
    }
}
