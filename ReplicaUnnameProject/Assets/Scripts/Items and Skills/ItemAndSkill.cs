using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "ItemsAndSkills", menuName = "Inventory/Create new Item or Skill")]
public class ItemAndSkill : ScriptableObject
{
    public string name;

    [TextArea]
    public string description;

    public ItemType itemType;
    public WeaponType weaponType;
    public SkillType skillType;

    public GameObject itemPrefab;
    public Material material;

    public Vector3 AttachPosition;
    public Vector3 AttachRotation;
    public Vector3 AttachScale;
    public Vector3 CharacterScale;
    public Vector3 ItemScale;
}

public enum ItemType
{
    Weapon,
    Skill
}

public enum SkillType
{
    SkillMini,
    SkillInvisible,
    SkillInvincible
}

public enum WeaponType
{
    Melee,
    Hammer,
    Range
}