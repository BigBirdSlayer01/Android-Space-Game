using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class SpaceShipBoss : Enemy
{
    public float xPos;
    float yPos;
    bool startPosition;
    Vector2 target;
    // Start is called before the first frame update
    public override void Start()
    {
        currHealth = maxHealth;
        yPos = transform.position.y;
        startPosition = false;
    }

    public override void Update()
    {
        if (GameManager.instance.gameActive)
        {
            if (!startPosition) //if not yet at starting position
            {
                startPos(); 
            }
            else //if has reached starting position
            {
                Move();
                Attack();
            }
            if (currHealth <= 0)
            {
                GooglePlayManager.instance.GiveAchievement("CgkIhuiA2dcfEAIQAg");
                GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Boss2_Beaten", GameManager.instance.score);
            }
        }
    }

    //moves the space ship
    public override void Move()
    {
        if (transform.position.y == midY) //if in middle
        {
            switch (Random.Range(0, 2)) //random go up or down
            {
                case 0:
                    target = new Vector2(xPos, upperY);
                    break;
                case 1:
                    target = new Vector2(xPos, lowerY);
                    break;
            }
        }
        else if (transform.position.y == upperY || transform.position.y == lowerY) //if at top or bottom go to middle
        {
            target = new Vector2(xPos, midY);
        }
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
    }

    public override void Attack() //attacks when reaching specific points on y axis that the player can be in
    {
        if (transform.position.y == 2.6f || transform.position.y == -2.6f || transform.position.y == 0)
        {
            GameObject currBullet = Instantiate(Bullet);
            currBullet.transform.position = transform.position;
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
        }
    }

    void startPos() //moves the enemy to the starting position
    {
        Vector2 initalTarget = new Vector2(xPos, yPos);
        transform.position = Vector2.MoveTowards(transform.position, initalTarget, speed * Time.deltaTime);
        if (transform.position.x == initalTarget.x)
        {
            startPosition = true;
        }
    }
}

