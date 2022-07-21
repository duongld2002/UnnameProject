using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cinemachine;

public class CameraManager : MonoBehaviour
{
    public static CameraManager Instance;

    [SerializeField]
    private CinemachineVirtualCamera vcam1;
    [SerializeField]
    private CinemachineVirtualCamera vcam2;
    [SerializeField]
    private CinemachineVirtualCamera vcam3;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            //DontDestroyOnLoad(gameObject);
        }
        else
        {
            //Destroy(gameObject);
        }
    }

    public void changeCameraRun()
    {
        vcam1.Priority = 0;
        vcam2.Priority = 1;
        vcam3.Priority = 0;
    }

    public void changeCameraDraw()
    {
        vcam1.Priority = 1;
        vcam2.Priority = 0;
        vcam3.Priority = 0;
    }

    public void faceCamera()
    {
        vcam1.Priority = 0;
        vcam2.Priority = 0;
        vcam3.Priority = 1;
    }
}
