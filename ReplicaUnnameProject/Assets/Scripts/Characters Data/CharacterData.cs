
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Character Data", menuName = "Character Data/Create new character")]
public class CharacterData : ScriptableObject
{
    public string name;
    [TextArea]
    public string description;

    public float attackRange;
    public float attackAngle;
    public float damage;
    public float health;
}
