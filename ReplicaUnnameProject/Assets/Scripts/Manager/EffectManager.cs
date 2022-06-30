using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager Instance;

    //[Header("Effects")]

    [Header("Sounds")]
    [SerializeField]
    AudioSource audioSource;
    [SerializeField]
    AudioClip fireBullet;

    private void Awake()
    {
        if (Instance == null)
            Instance = this;
        DontDestroyOnLoad(gameObject);
    }

    public void SpawnFireBulletSound()
    {
        audioSource.PlayOneShot(fireBullet, 0.2f);
    }
}
