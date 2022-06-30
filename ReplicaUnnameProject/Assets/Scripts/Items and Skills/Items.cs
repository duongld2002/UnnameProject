using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using DG.Tweening;

public class Items : MonoBehaviour
{
    [SerializeField]
    private ItemAndSkill itemsData;

    //public GameObject Hand;

    private void Awake()
    {
        // Load data from scriptable object
        var prefabmesh = itemsData.itemPrefab.GetComponent<MeshFilter>().sharedMesh;
        var prefabrend = itemsData.itemPrefab.GetComponent<Renderer>().sharedMaterial;
        GetComponentInChildren<Renderer>().sharedMaterial = prefabrend;
        //EditorUtility.SetDirty(GetComponentInChildren<Renderer>());
        GetComponentInChildren<MeshFilter>().mesh = prefabmesh;
        //EditorUtility.SetDirty(GetComponentInChildren<MeshFilter>());
        //GetComponent<MeshCollider>().sharedMesh = prefabmesh;
        //EditorUtility.SetDirty(GetComponent<MeshCollider>());
        transform.localScale = itemsData.ItemScale;

        transform.DORotate(new Vector3(0.0f, 360.0f, 0.0f), 5.0f, RotateMode.FastBeyond360)
            .SetLoops(-1, LoopType.Restart).SetRelative().SetEase(Ease.Linear);

        //transform.DOMove(transform.position + transform.up, 1.0f)
        //    .SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InOutSine);
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    if (other.CompareTag("Player"))
    //    {
    //        ItemsManager itemsManager = other.GetComponent<ItemsManager>();
    //        if (itemsManager != null)
    //            itemsManager.EquipItem(itemsData);
    //
    //        gameObject.SetActive(false);
    //    }
    //}
}
