using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemsAndSkills", menuName = "Inventory/Create new Item")]
public class ItemSO : ScriptableObject
{
    public string name;

    [TextArea]
    public string description;

    public WeaponType weaponType;

    public GameObject itemPrefab;

    public Vector3 AttachPosition;
    public Vector3 AttachRotation;
    public Vector3 CharacterScale;
    public Vector3 ItemScale;
}
