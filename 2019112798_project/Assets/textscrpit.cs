using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class textscrpit : MonoBehaviour
{
    public Text ScrpitText;

    int Gold = 0;
    // Start is called before the first frame update
    void Start()
    {
        ScrpitText.text ="0"
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            Gold += 1;
            ScrpitText.text=Gold.Tostring();
        }
    }
}
