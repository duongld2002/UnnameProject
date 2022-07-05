using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class EventManager : MonoBehaviour
{
    public static event Action<int> SetActiveCheckPoint;

    public static void StartCheckPointEvent(int id)
    {
        SetActiveCheckPoint?.Invoke(id);
    }
}
