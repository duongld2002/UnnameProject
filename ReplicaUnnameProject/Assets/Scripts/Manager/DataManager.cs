using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class DataManager : MonoBehaviour
{
    //
    public Action<int> UpdateGoldCallback;
    public Action UpdateStatCallback;

    //
    public static DataManager Instance;
    //public UserData userData { get; private set; }

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        DontDestroyOnLoad(gameObject);
        Application.targetFrameRate = 60;
        //LoadUserData();
        //LoadLevelConfig();
        //LoadLevelBossConfig();
        //runtimeData = new RuntimeData();
        //CheckSkinDataSave();
    }
}
