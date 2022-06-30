using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemsManager : MonoBehaviour
{
    //[SerializeField]
    //private Transform itemSlot;

    public GameObject currentItem;
    public GameObject currentSkill;

    public GameObject Hand;

    //[SerializeField]
    //AudioSource pickUpSound;

    [SerializeField]
    private ItemAndSkill equippedItems;
    [SerializeField]
    private ItemAndSkill equipedSkill;

    [SerializeField]
    private Character character;

    private void Start()
    {
        character = GetComponent<Character>();
    }

    public void EquipItem(ItemAndSkill itemsData)
    {
        //pickUpSound.Play();
        equippedItems = itemsData;
        if (itemsData.itemType == ItemType.Weapon)
            if (currentItem != null)
                currentItem.SetActive(false);
            

        currentItem = Instantiate(itemsData.itemPrefab);
        currentItem.transform.parent = Hand.transform;
        currentItem.transform.localPosition = itemsData.AttachPosition;
        currentItem.transform.localEulerAngles = itemsData.AttachRotation;
        currentItem.transform.localScale = new Vector3(2f, 2f, 2f);

        character.bulletDirection = currentItem.transform;

        //switch (itemsData.itemType)
        //{
        //    case ItemType.SkillMini:
        //        //Change size of Character if collect Mini Potion
        //
        //        Shield shield = character.bubbleShield.GetComponent<Shield>();
        //        shield._shieldOn = true;
        //        shield.OpenCloseShield();
        //        SphereCollider sphereCollider = character.bubbleShield.GetComponent<SphereCollider>();
        //        sphereCollider.enabled = false;
        //
        //        character.transform.localScale = itemsData.CharacterScale;
        //        int Layer = LayerMask.NameToLayer("Player");
        //        gameObject.layer = Layer;
        //
        //        foreach (var rend in character.renderers)
        //        {
        //            rend.material = itemsData.material;
        //        }
        //        break;
        //
        //    case ItemType.SkillInvisible:
        //        //Change transparent and make character invisible in enemy's field of view
        //
        //        Shield shield1 = character.bubbleShield.GetComponent<Shield>();
        //        shield1._shieldOn = true;
        //        shield1.OpenCloseShield();
        //        SphereCollider sphereCollider1 = character.bubbleShield.GetComponent<SphereCollider>();
        //        sphereCollider1.enabled = false;
        //
        //        character.transform.localScale = itemsData.CharacterScale;
        //        int LayerIgnore = LayerMask.NameToLayer("Ignore Raycast");
        //        gameObject.layer = LayerIgnore;
        //
        //        foreach (var rend in character.renderers)
        //        {
        //            rend.material = itemsData.material;
        //        }
        //        break;
        //
        //    case ItemType.SkillInvincible:
        //        //Make character Invincible
        //        //character.currentHealth = 9999;
        //
        //        Shield shield2 = character.bubbleShield.GetComponent<Shield>();
        //        shield2._shieldOn = false;
        //        shield2.OpenCloseShield();
        //        SphereCollider sphereCollider2 = character.bubbleShield.GetComponent<SphereCollider>();
        //        sphereCollider2.enabled = true;
        //
        //        character.transform.localScale = itemsData.CharacterScale;
        //        int PlayerLayer = LayerMask.NameToLayer("Player");
        //        gameObject.layer = PlayerLayer;
        //
        //        foreach (var rend in character.renderers)
        //        {
        //            rend.material = itemsData.material;
        //        }
        //        break;
        //}

        switch (itemsData.weaponType)
        {
            case WeaponType.Melee:
                character.attackState = AttackState.MeleeAttack;
                break;
            case WeaponType.Range:
                character.attackState = AttackState.RangeAttack;
                break;
        }
    }

    public void EquipSkill(ItemAndSkill itemsData)
    {
        equipedSkill = itemsData;

        switch (itemsData.skillType)
        {
            case SkillType.SkillMini:
                //Change size of Character if collect Mini Potion

                Shield shield = character.bubbleShield.GetComponent<Shield>();
                shield._shieldOn = true;
                shield.OpenCloseShield();
                SphereCollider sphereCollider = character.bubbleShield.GetComponent<SphereCollider>();
                sphereCollider.enabled = false;

                character.transform.localScale = itemsData.CharacterScale;
                int Layer = LayerMask.NameToLayer("Player");
                gameObject.layer = Layer;

                foreach (var rend in character.renderers)
                {
                    rend.material = itemsData.material;
                }
                break;

            case SkillType.SkillInvisible:
                //Change transparent and make character invisible in enemy's field of view

                Shield shield1 = character.bubbleShield.GetComponent<Shield>();
                shield1._shieldOn = true;
                shield1.OpenCloseShield();
                SphereCollider sphereCollider1 = character.bubbleShield.GetComponent<SphereCollider>();
                sphereCollider1.enabled = false;

                character.transform.localScale = itemsData.CharacterScale;
                int LayerIgnore = LayerMask.NameToLayer("Ignore Raycast");
                gameObject.layer = LayerIgnore;

                foreach (var rend in character.renderers)
                {
                    rend.material = itemsData.material;
                }
                break;

            case SkillType.SkillInvincible:
                //Make character Invincible
                //character.currentHealth = 9999;

                Shield shield2 = character.bubbleShield.GetComponent<Shield>();
                shield2._shieldOn = false;
                shield2.OpenCloseShield();
                SphereCollider sphereCollider2 = character.bubbleShield.GetComponent<SphereCollider>();
                sphereCollider2.enabled = true;

                character.transform.localScale = itemsData.CharacterScale;
                int PlayerLayer = LayerMask.NameToLayer("Player");
                gameObject.layer = PlayerLayer;

                foreach (var rend in character.renderers)
                {
                    rend.material = itemsData.material;
                }
                break;
        }
    }
}
