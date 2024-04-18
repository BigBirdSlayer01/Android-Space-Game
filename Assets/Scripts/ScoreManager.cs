using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreManager : MonoBehaviour
{
    int score;
    public TMP_InputField input;

    private void Start()
    {
        score = (int)GameManager.instance.score;
    }

    public void SubmitScore()
    {
        score = (int)GameManager.instance.score;
        LeaderBoard.instance.setScore(input.text, score);
    }
}

