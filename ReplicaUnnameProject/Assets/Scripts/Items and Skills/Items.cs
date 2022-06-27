using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class Items : MonoBehaviour
{
    [SerializeField]
    private ItemsAndSkillsData itemsData;

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
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            ItemsManager itemsManager = other.GetComponent<ItemsManager>();
            if (itemsManager != null)
                itemsManager.EquipItem(itemsData);

            gameObject.SetActive(false);
        }
    }
}
