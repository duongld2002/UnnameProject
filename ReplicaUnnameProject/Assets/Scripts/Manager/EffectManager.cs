using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager Instance;

    [Header("Effects")]
    [SerializeField]
    Effect lootEffect;
    [SerializeField]
    Effect bloodPoolEffect;
    [SerializeField]
    Effect bloodSplashEffect;
    [SerializeField]
    Effect wideBloodSplashEffect;
    [SerializeField]
    Effect hitBloodSplashEffect;
    [SerializeField]
    Effect bombExplosion;
    [SerializeField]
    Effect shockEffect;

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

    public void spawmLootEffect(Vector3 pos)
    {
        SpawnEffect("loot_fx", lootEffect, pos);
    }

    public void SpawnBloodPoolEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("blood_pool_fx", bloodPoolEffect, pos);
    }

    public void SpawnBloodSplashEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("blood_splash_fx", bloodSplashEffect, pos);
    }

    public void SpawnHitBloodSplashEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("blood_hit_splash_fx", hitBloodSplashEffect, pos);
    }

    public void SpawnWideBloodSplashEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("blood_wide_splash_fx", wideBloodSplashEffect, pos);
    }

    public void SpawnBombExplosionEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("bomb_explosion_fx", bombExplosion, pos);
    }

    public void SpawnShockEffect(Vector3 pos)
    {
        //pos = pos.SetY(1.6f);
        SpawnEffect("shock_fx", shockEffect, pos);
    }

    private void SpawnEffect(string name, Effect effectPrefab, Vector3 pos, Transform parent = null, Quaternion rot = default(Quaternion))
    {
        Effect effect = ObjectPool.Get<Effect>(name);

        if (effect == null)
        {
            effect = Instantiate(effectPrefab, parent == null ? transform : parent);
        }
        if (parent != null) effect.transform.SetParent(parent);
        effect.transform.position = pos;
        if (rot != default(Quaternion))
            effect.transform.rotation = rot;
        effect.gameObject.SetActive(true);
        effect.Init(name);
    }

    public void SpawnFireBulletSound()
    {
        audioSource.PlayOneShot(fireBullet, 0.2f);
    }
}
