using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;

public class UIManager : MonoBehaviour
{
    public static UIManager instance;
    public GameObject StartUI;
    public GameObject inGameUI;
    public GameObject GameOverUI;
    public GameObject LeaderBoardUI;

    public TextMeshProUGUI ScoreText;
    public TextMeshProUGUI ScoreGameOverText;

    public GameObject[] Hearts;
    private void Awake()
    {
        instance = this;
    }
    
    void Start()
    {
        StartUI.SetActive(true); //turns on menu ui
        inGameUI.SetActive(false); //turns off game ui
        foreach(GameObject h in Hearts) //sets all hearts active
        {
            h.SetActive(true);
        }
    }

    public void startButton() //used to start the game
    {
        EnemyManager.instance.StartSpawning();
        EnemyManager.instance.StartBossSpawning();
        GameManager.instance.gameActive = true;
        StartUI.SetActive(false);
        inGameUI.SetActive(true);
        //GameManager.instance.thePlayer.GetComponent<PlayerController>().StartInvokingShoot();
        StartCoroutine(GameManager.instance.thePlayer.GetComponent<PlayerController>().shootin());
    }    

    //turns all ui off and turns on home menu UI
    public void MainMenuReturn()
    {
        StartUI.SetActive(true);
        inGameUI.SetActive(false);
        LeaderBoardUI.SetActive(false);
        GameOverUI.SetActive(false);
    }

    public void GameOverScreen()
    {
        StartUI.SetActive(false);
        inGameUI.SetActive(false);
        LeaderBoardUI.SetActive(false);
        GameOverUI.SetActive(true);
    }

    public void ToggleGodMode()
    {
        if(GameManager.instance.GodMode)
        {
            GameManager.instance.GodMode = false;
        }
        else
        {
            GameManager.instance.GodMode = true;
            GooglePlayManager.instance.GiveAchievement("CgkIhuiA2dcfEAIQBA");
            GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Using_Baby_Mode");
        }
    }

    public void LeaderBoardButton()
    {
        StartUI.SetActive(false);
        inGameUI.SetActive(false);
        LeaderBoardUI.SetActive(true);
        GameOverUI.SetActive(false);
    }

    public void SubmitButton()
    {
        //resets scene
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }


    public void SetHealth() //sets hearts based on the health amount of the player
    {
        float h = GameManager.instance.thePlayer.GetComponent<PlayerController>().Health;
        if (h == 3)
        {
            foreach (GameObject hrth in Hearts)
            {
                hrth.SetActive(true);
            }
        }
        else if(h == 2)
        {
            Hearts[2].SetActive(false);
        }
        else if(h == 1)
        {
            Hearts[1].SetActive(false);
        }
        else if(h == 0)
        {
            Hearts[0].SetActive(false);
        }
    }

    public void UpdateScore(int addedScore) //updates the score UI element in the game
    {
        if(!GameManager.instance.GodMode)
        {
            GameManager.instance.score += addedScore;
            ScoreText.text = GameManager.instance.score.ToString();
        }
        
    } 
    
    public void showAchievements()
    {
        Social.ShowAchievementsUI();
    }

    public void GameOverScore()
    {
        ScoreGameOverText.text = GameManager.instance.score.ToString();
    }

    public void Exit()
    {
        Application.Quit();
    }
}
