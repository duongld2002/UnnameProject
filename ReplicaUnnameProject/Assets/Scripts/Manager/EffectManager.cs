using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public static EffectManager Instance;

    [Header("Effects")]
    [SerializeField]
    Effect lootEffect;

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
