using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimeManager : MonoBehaviour
{
    public static TimeManager Instance;

    public float slowDownFactor = 0.05f;
    public float slownDownLength = 2f;

    public bool isSlow;

    private void Awake()
    {
        isSlow = true;

        if (Instance == null)
            Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    private void Update()
    {
        //Time.timeScale += (1f / slownDownLength) * Time.unscaledDeltaTime;
        //Time.timeScale = Mathf.Clamp(Time.timeScale, 0f, 1f);

        if (isSlow == true)
        {
            Time.timeScale = 0.2f;
        }
        else if (isSlow == false)
        {
            Time.timeScale = 1.0f;
        }
    }

    public void DoSlowMotion()
    {
        //Time.timeScale = slowDownFactor;
        //Time.fixedDeltaTime = Time.timeScale * .02f;
        //Time.timeScale += (1f / slownDownLength) * Time.unscaledDeltaTime;
        //Time.timeScale = Mathf.Clamp(Time.timeScale, 0f, 1f);
    }

    public void cancelSlowMotion()
    {
        isSlow = false;
    }
}
