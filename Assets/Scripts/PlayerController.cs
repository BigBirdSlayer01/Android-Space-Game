using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PlayerController : MonoBehaviour
{
    //contains bounds
    public GameObject LeftBound;
    public GameObject RightBound;

    public GameObject Bullet; //contains bullet game object

    public float Health; //health
    public float MaxHealth; //max health
    float horizontalInput; //stores horizontal input for movement
    float verticalInput; //stores vertical input for movement
    float Speed; //player speed

    float shootTime = 1.0f;

    Vector2 startTouchPos;
    Vector2 endTouchPos;

    // Start is called before the first frame update
    void Start()
    {
        Speed = 10;
        Health = 3;
        MaxHealth = 3;
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.instance.gameActive) //if gameActive is true
        {
            //doShoot(); //shooting
            MovePlayer(); //keyboard move
            TouchControl(); //touch move
        }  
    }

    private void MovePlayer() //moves the player this is for keyboard
    {
        verticalInput = Input.GetAxisRaw("Vertical"); //takes in horizontal input variable
        //moves player up and down the 3 axis depending on player input
        if(verticalInput == 1 && transform.position.y != 2.6f) //if move up and not at top move upwards
        {
            transform.position = new Vector2(transform.position.x, transform.position.y + 2.6f);
        }
        else if(verticalInput == -1 && transform.position.y != -2.6f) //if down pressed and not at bottom move downward
        {
            transform.position = new Vector2(transform.position.x, transform.position.y - 2.6f);
        }
        
    }

    //handles the touch controls
    private void TouchControl()
    {
        //when screen touched store the starting touch position
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            startTouchPos = Input.GetTouch(0).position;
        }

        //when the screen is no longer being touched store the end touch
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            endTouchPos = Input.GetTouch(0).position;

            //if the touch moved down and not at bottom of screen move down
            if (endTouchPos.y < startTouchPos.y && transform.position.y != -2.6f)
            {
                transform.position = new Vector2(transform.position.x, transform.position.y - 2.6f);
            }
            //if the touch moved up and not at top of screen move up
            else if (endTouchPos.y > startTouchPos.y && transform.position.y != 2.6f)
            {
                transform.position = new Vector2(transform.position.x, transform.position.y + 2.6f);
            }
        }
    }

    public IEnumerator shootin() //used to make the player shoot
    {
        Instantiate(Bullet); //instatiates the bullet game object
        SoundManager.Instance.PlayGun(SoundManager.Instance.Shoot); //plays the shooting sound 
        yield return new WaitForSeconds(shootTime); //waits the set wait time 
        StartCoroutine(shootin()); //starts the coroutine again
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        //if collides with bullet reduce health
        if(collision.gameObject.CompareTag("EnemyBullet"))
        {
            Destroy(collision.gameObject);
            if(!GameManager.instance.GodMode)
            {
                Health = Health - 0.5f;
                UIManager.instance.SetHealth();
                isPlayerAlive();
            }
        }
        else if(collision.gameObject.CompareTag("BossTentacle"))
        {
            if (!GameManager.instance.GodMode)
            {
                Health = Health - 0.5f;
                UIManager.instance.SetHealth();
                isPlayerAlive();
            }
        }
        else if(collision.gameObject.CompareTag("Pickup")) //if collides with pickup
        {
            if(collision.gameObject.GetComponent<Pickup>().Type == thisEnum.Health) //if health set health to max
            {
                Health = MaxHealth;
                Destroy(collision.gameObject);
            }
            else if(collision.gameObject.GetComponent<Pickup>().Type == thisEnum.Damage) //if damage start the damage boost Coroutine
            {
                StartCoroutine(damageBoost());
                Destroy(collision.gameObject);
            }
            
        }
    }

    //increases shoot speed for 6 seconds
    IEnumerator damageBoost()
    {
        shootTime = 0.4f;
        yield return new WaitForSeconds(6);
        shootTime = 1.0f;
    }

    //if player health is zero set game active to false
    void isPlayerAlive()
    {
        if(Health <= 0)
        {
            GooglePlayManager.instance.GiveAchievement("CgkIhuiA2dcfEAIQBQ");
            GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "PlayerDied", GameManager.instance.score);
            GameManager.instance.gameActive = false;
            StopAllCoroutines();
            UIManager.instance.GameOverScore();
            UIManager.instance.GameOverScreen();
        }
    }
}
