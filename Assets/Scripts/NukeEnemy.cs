using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class NukeEnemy : Enemy
{
    public override void Start()
    {
        currHealth = maxHealth; //sets health to max
    }

    public override void Update()
    {
        if(GameManager.instance.gameActive) //if active
        {
            Move(); //move function called
            isOffMap();
        }
        
    }

    public override void Move() //movcs towards the player
    {
        transform.position = Vector2.MoveTowards(transform.position, GameManager.instance.thePlayer.transform.position, speed * Time.deltaTime);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //if player collision destroy game object
        if (collision.gameObject.CompareTag("Player"))
        {
            Destroy(gameObject);
        }
        else if (collision.gameObject.CompareTag("PlayerBullet"))
        {
            Destroy(collision.gameObject);
            currHealth = currHealth - 5; //reduce health
            if (currHealth <= 0) //if health 0
            {
                Destroy(gameObject); //destroy object
                UIManager.instance.UpdateScore((int)pointValue); //increase score
                int num = UnityEngine.Random.Range(0, 5); //get random num
                if (num % 2 == 0) //if num 2
                {
                    Instantiate(Pickup, transform.position, Quaternion.identity); //spawn a pickup
                }
                if (isBoss)
                {
                    EnemyManager.instance.StartSpawning();
                    EnemyManager.instance.StartBossSpawning();
                }

            }
        }
    }
}
