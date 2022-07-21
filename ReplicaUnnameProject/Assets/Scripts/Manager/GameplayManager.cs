using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public enum GameState
{
    NotStart, Started
}

public enum LevelState
{
    NotPass, Pass
}

public class GameplayManager : MonoBehaviour
{
    public GameObject winUI;
    public GameObject loseUI;

    public static GameplayManager Instance;

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

    public void losePopup()
    {
        loseUI.SetActive(true);
    }

    public void winPopup()
    {
        winUI.SetActive(true);
    }

    public void ReplayGame()
    {
        SceneManager.LoadScene("Level " + LevelManager.Instance.levelNum);
    }

    public void NextLevel()
    {
        if (LevelManager.Instance.levelNum >= 4)
            LevelManager.Instance.levelNum = 1;
        LevelManager.Instance.levelNum++;
        SceneManager.LoadScene("Level " + LevelManager.Instance.levelNum);
    }
}
