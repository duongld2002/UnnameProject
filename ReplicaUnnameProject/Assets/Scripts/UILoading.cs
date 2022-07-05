using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class UILoading : MonoBehaviour
{
    public Image imgProgressBar;
    AsyncOperation async;

    IEnumerator Start()
    {
        yield return null;
        string sceneName = "VeryFirstScene";

        imgProgressBar.fillAmount = 0;
        curValue = 0;

        async = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Single);
        async.allowSceneActivation = false;

        DOTween.To(() => RunDoTween, x => RunDoTween = x, 1f, 3f);
        yield return new WaitForSeconds(3f);

        async.allowSceneActivation = true;
    }

    float curValue;
    float preValue;
    float RunDoTween
    {
        set
        {
            curValue = value;
            imgProgressBar.fillAmount = curValue;
            if (curValue >= preValue)
            {
                preValue = curValue;
            }
        }
        get
        {
            return curValue;
        }
    }
}
