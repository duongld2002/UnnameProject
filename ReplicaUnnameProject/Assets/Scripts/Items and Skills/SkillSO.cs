using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemsAndSkills", menuName = "Inventory/Create new Skill")]
public class SkillSO : ScriptableObject
{
    public string name;

    [TextArea]
    public string description;

    public ItemType itemType;

    public GameObject itemPrefab;
    public Material material;

    public Vector3 ItemScale;
}
