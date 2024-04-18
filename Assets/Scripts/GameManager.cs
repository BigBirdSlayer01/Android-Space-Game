using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameAnalyticsSDK;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;


public class GameManager : MonoBehaviour
{
    // Start is called before the first frame update

    public static GameManager instance; //makes the game manager an instance

    public GameObject thePlayer; //holds player object
    public bool gameActive; //game active bool
    public int bossCounter;
    public int score; //holds the score
    public bool GodMode;

    private void Awake()
    {
        instance = this;
        GameAnalytics.Initialize();
    }
    void Start()
    {
        bossCounter = 0;
        gameActive = false; //game not actice 
        GodMode = false;
        score = 0; //score 0
        UIManager.instance.UpdateScore(0); //set the score to 0
    }
}
