using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Dan.Main;

public class LeaderBoard : MonoBehaviour
{
    public List<TextMeshProUGUI> names;
    public List<TextMeshProUGUI> scores;

    private string publicLeaderboardKey;

    public static LeaderBoard instance;

    private void Awake()
    {
        instance = this;
    }

    private void Start()
    {
        //secret 2baa2f1d18ff109830c48803f42b068aab18ffafd6142dfaae6d3169d9b61b7cbe78b0418c9f059a918a0e02d53757fea4c53e45902a221112ced88ab1ce77bcae29c8959f7d6819235602930facbb80f6250edee14294a721539575be1306ec80bf1dbd4a085c64f714c9db6fbd361d1fe32dc50bc2309298bb03431b0f869b
        publicLeaderboardKey = "628d974ee657cff4c18400bc53c11d9cf06c623fb72b3b585cc42339c2d02ca5"; //the public key for the hosted leaderboard
        GetLeaderBoard(); //gets the leaderboard from the server
    }

    public void GetLeaderBoard()
    {
        LeaderboardCreator.GetLeaderboard(publicLeaderboardKey, ((param) => //gets leaderboard + adds names and scores to UI elements
        {
            int loopLen = (param.Length < names.Count) ? param.Length : names.Count;
            for (int i = 0; i < loopLen; i++)
            {
                names[i].text = param[i].Username;
                scores[i].text = param[i].Score.ToString();
            }
        }));
    }

    public void setScore(string username, int score) //sets a score for a new high score
    {
        LeaderboardCreator.UploadNewEntry(publicLeaderboardKey, username, score, ((param) =>
        {
            GetLeaderBoard();
        }));
    }
}

