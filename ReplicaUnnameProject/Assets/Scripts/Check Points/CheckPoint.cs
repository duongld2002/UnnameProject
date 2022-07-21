using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CheckPoint : MonoBehaviour
{
    public GameObject anotherChkPoint;
    public int chkPointID;

    public Transform wall;

    void Start()
    {
        //wall.DOLocalMoveY(25, 4);

        EventManager.SetActiveCheckPoint += activeChkPoint;
    }

    private void activeChkPoint(int triggerID)
    {
        if (triggerID == chkPointID)
        {
            anotherChkPoint.SetActive(true);
            Debug.Log(anotherChkPoint);
        }
    }

    private void OnDisable()
    {
        EventManager.SetActiveCheckPoint -= activeChkPoint;
    }
}
