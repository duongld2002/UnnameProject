using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemsAndSkills", menuName = "Inventory/Create new Item or Skill")]
public class ItemsAndSkillsData : ScriptableObject
{
    public string name;

    [TextArea]
    public string description;

    public ItemType itemType;
    public WeaponType weaponType;

    public GameObject itemPrefab;
    public Material material;

    public Vector3 AttachPosition;
    public Vector3 AttachRotation;
    public Vector3 CharacterScale;
    public Vector3 ItemScale;
}

public enum ItemType
{
    Weapon,
    SkillMini,
    SkillInvisible,
    SkillInvincible
}

public enum WeaponType
{
    Melee,
    Range
}