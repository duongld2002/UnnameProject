using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PickableItems : MonoBehaviour
{
    [SerializeField]
    ItemAndSkill itemsData;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if (itemsData.itemType == ItemType.Weapon)
            {
                ItemsManager itemsManager = other.GetComponent<ItemsManager>();
                if (itemsManager != null)
                    itemsManager.EquipItem(itemsData);

                gameObject.SetActive(false);
            }
            
            if (itemsData.itemType == ItemType.Skill)
            {
                ItemsManager itemsManager = other.GetComponent<ItemsManager>();
                if (itemsManager != null)
                    itemsManager.EquipSkill(itemsData);

                gameObject.SetActive(false);
            }
        }
    }
}
