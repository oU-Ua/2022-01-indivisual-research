using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class button : MonoBehaviour
{
    public Text buttontext;
    public Text imageText;

    int scoreButton;
    int scoreImage;

    // Start is called before the first frame update
    private void Awake()
    {
        scoreButton = 0;
        scoreImage = 0;
    }

    // Update is called once per frame
    private void Update()
    {
        buttontext.text = scoreButton.ToString();
        imageText.text = scoreImage.ToString();

    }
    public void OnclickBasicButton()
    {
        scoreButton = scoreButton + 1;

    }
    public void OnclickImageButton()
    {
        scoreImage = scoreImage + 1;

    }
}
