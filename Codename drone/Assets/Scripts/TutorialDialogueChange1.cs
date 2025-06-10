using UnityEngine;
using TMPro;

public class TutorialDialogueChange1 : MonoBehaviour
{
    public TMP_Text textToShow;
    public TMP_Text textToHide;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("drone"))
        {
            textToHide.enabled = false;
            textToShow.enabled = true;
            
        }
    }
}
