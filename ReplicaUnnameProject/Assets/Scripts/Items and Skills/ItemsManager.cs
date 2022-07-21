using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemsManager : MonoBehaviour
{
    public GameObject currentItem;
    //public GameObject currentSkill;

    public Collider itemCollider;

    public GameObject Hand;
    public GameObject player;
    public GameObject boss;

    public GameObject firePoint;

    [SerializeField]
    private ItemAndSkill equippedItems;
    //[SerializeField]
    //private ItemAndSkill equipedSkill;

    [SerializeField]
    private Character character;
    //[SerializeField]
    //private Shield shield;
    //[SerializeField]
    //private SphereCollider shieldCollider;

    private void Start()
    {
        character = GetComponent<Character>();
        itemCollider = currentItem.GetComponent<Collider>();

        boss = GameObject.FindGameObjectWithTag("Enemy");
    }

    public void EquipItem(ItemAndSkill itemsData)
    {
        //pickUpSound.Play();
        equippedItems = itemsData;
        if (itemsData.itemType == ItemType.Weapon)
            if (currentItem != null)
                DropItem();

        currentItem = Instantiate(itemsData.itemPrefab);
        currentItem.transform.parent = Hand.transform;
        currentItem.transform.localPosition = itemsData.AttachPosition;
        currentItem.transform.localEulerAngles = itemsData.AttachRotation;
        //currentItem.transform.localScale = new Vector3(2f, 2f, 2f);
        currentItem.transform.localScale = itemsData.AttachScale;

        itemCollider = currentItem.GetComponent<Collider>();

        character.bulletDirection = currentItem.transform;

        switch (itemsData.weaponType)
        {
            case WeaponType.Melee:
                character.attackState = AttackState.None;
                break;
            case WeaponType.Hammer:
                character.attackState = AttackState.MeleeAttack;
                break;
            case WeaponType.Range:
                //character.attackState = AttackState.RangeAttack;
                //character.pathMover.canMove = false;
                character.pathMover.pathPoints.Clear();
                firePoint.transform.LookAt(boss.transform.position);
                player.transform.LookAt(boss.transform.position);
                Debug.Log(boss.transform.localPosition);
                player.GetComponent<Animator>().SetBool("IsAttack", true);
                player.GetComponent<Animator>().SetFloat("Blend", 7);
                //EffectManager.Instance.SpawnFlameEffect(firePoint.position);
                firePoint.SetActive(true);
                StartCoroutine(DestroyBulletAfterTime());
                break;
        }
    }

    public void DropItem()
    {
        currentItem.SetActive(false);
    }

    public void enableWeapon()
    {
        itemCollider.enabled = true;
    }

    public void disableWeapon()
    {
        itemCollider.enabled = false;
    }

    IEnumerator DestroyBulletAfterTime()
    {
        yield return new WaitForSeconds(1f);
        firePoint.SetActive(false);
    }

    //public void EquipSkill(ItemAndSkill itemsData)
    //{
    //    equipedSkill = itemsData;
    //
    //    if (currentSkill != null)
    //        currentSkill.SetActive(false);
    //
    //    currentSkill = Instantiate(itemsData.itemPrefab);
    //    currentSkill.transform.parent = Hand.transform;
    //
    //    switch (itemsData.skillType)
    //    {
    //        case SkillType.SkillMini:
    //            //Change size of Character if collect Mini Potion
    //
    //            Debug.Log("Mini");
    //
    //            shield = character.bubbleShield.GetComponent<Shield>();
    //            shield._shieldOn = true;
    //            shield.OpenCloseShield();
    //
    //            shieldCollider = character.bubbleShield.GetComponent<SphereCollider>();
    //            shieldCollider.enabled = false;
    //
    //            character.transform.localScale = itemsData.CharacterScale;
    //
    //            int Layer = LayerMask.NameToLayer("Player");
    //            gameObject.layer = Layer;
    //
    //            foreach (var rend in character.renderers)
    //            {
    //                rend.material = itemsData.material;
    //            }
    //            break;
    //
    //        case SkillType.SkillInvisible:
    //            //Change transparent and make character invisible in enemy's field of view
    //
    //            Debug.Log("Invisible");
    //
    //            shield = character.bubbleShield.GetComponent<Shield>();
    //            shield._shieldOn = true;
    //            shield.OpenCloseShield();
    //
    //            shieldCollider = character.bubbleShield.GetComponent<SphereCollider>();
    //            shieldCollider.enabled = false;
    //
    //            character.transform.localScale = itemsData.CharacterScale;
    //
    //            int LayerIgnore = LayerMask.NameToLayer("Ignore Raycast");
    //            gameObject.layer = LayerIgnore;
    //
    //            foreach (var rend in character.renderers)
    //            {
    //                rend.material = itemsData.material;
    //            }
    //            break;
    //
    //        case SkillType.SkillInvincible:
    //            //Make character Invincible
    //            //character.currentHealth = 9999;
    //
    //            Debug.Log("Invincible");
    //
    //            shield = character.bubbleShield.GetComponent<Shield>();
    //            shield._shieldOn = false;
    //            shield.OpenCloseShield();
    //
    //            shieldCollider = character.bubbleShield.GetComponent<SphereCollider>();
    //            shieldCollider.enabled = true;
    //
    //            character.transform.localScale = itemsData.CharacterScale;
    //
    //            int PlayerLayer = LayerMask.NameToLayer("Player");
    //            gameObject.layer = PlayerLayer;
    //
    //            foreach (var rend in character.renderers)
    //            {
    //                rend.material = itemsData.material;
    //            }
    //            break;
    //    }
    //}
}
