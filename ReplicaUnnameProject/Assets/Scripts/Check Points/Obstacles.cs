using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Obstacles : MonoBehaviour
{
    private void Awake()
    {
        transform.DORotate(new Vector3(360f, 0.0f, 0.0f), 2f, RotateMode.FastBeyond360)
            .SetLoops(-1, LoopType.Restart).SetRelative().SetEase(Ease.Linear);

        transform.DOMoveX(12, 5f)
            .SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InOutSine);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Character character = other.GetComponent<Character>();
            character.currentHealth = 0;
            character.pathCreator.points.Clear();
            //character.playerState = PlayerState.Shock;
            EffectManager.Instance.SpawnBloodPoolEffect(transform.position);
        }
    }
}
