using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class EventManager : MonoBehaviour
{
    public static event Action<int> SetActiveCheckPoint;

    public static event Action<int> DisableLaserWall;

    public static event Action ChangeCamera;

    public static void StartCheckPointEvent(int id)
    {
        SetActiveCheckPoint?.Invoke(id);
    }

    public static void LaserWallEvent(int id)
    {
        DisableLaserWall?.Invoke(id);
    }

    public static void ChangeCameraEvent()
    {
        ChangeCamera?.Invoke();
    }
}
