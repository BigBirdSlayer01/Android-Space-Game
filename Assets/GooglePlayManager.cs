using System;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using System.Threading.Tasks;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;


public class GooglePlayManager : MonoBehaviour
{
    public string Token;
    public string Error;

    public static GooglePlayManager instance;

    void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        PlayGamesPlatform.Activate();
    }

    async void Start()
    {
        await UnityServices.InitializeAsync();
        await LoginGooglePlayGames();
        await SignInWithGooglePlayGamesAsync(Token);
    }
    //Fetch the Token / Auth code
    public Task LoginGooglePlayGames() //Login to Google Play Games
    {
        var tcs = new TaskCompletionSource<object>();
        PlayGamesPlatform.Instance.Authenticate((success) =>
        {
            if (success == SignInStatus.Success)
            {
                Debug.Log("Login with Google Play games successful.");
                PlayGamesPlatform.Instance.RequestServerSideAccess(true, code =>
                {
                    Debug.Log("Authorization code: " + code);
                    Token = code;
                    // This token serves as an example to be used for SignInWithGooglePlayGames
                    tcs.SetResult(null);
                });
            }
            else
            {
                Error = "Failed to retrieve Google play games authorization code";
                Debug.Log("Login Unsuccessful");
                tcs.SetException(new Exception("Failed"));
            }
        });
        return tcs.Task;
    }


    async Task SignInWithGooglePlayGamesAsync(string authCode)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithGooglePlayGamesAsync(authCode);
            Debug.Log($"PlayerID: {AuthenticationService.Instance.PlayerId}"); //Display the Unity Authentication PlayerID
            Debug.Log("SignIn is successful.");
        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            Debug.LogException(ex);
        }
    }

    public void GiveAchievement(string achievementId)
    {
        // Check if user is authenticated with Google Play Games
        if (PlayGamesPlatform.Instance.IsAuthenticated())
        {
            // Unlock the achievement
            Social.ReportProgress(achievementId, 100.0f, (bool success) => {
                if (success)
                {
                    Debug.Log("Achievement unlocked: " + achievementId);
                }
                else
                {
                    Debug.LogWarning("Failed to unlock achievement: " + achievementId);
                }
            });
        }
        else
        {
            Debug.LogWarning("User is not authenticated with Google Play Games.");
        }
    }
}