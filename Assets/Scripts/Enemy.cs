using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Enemy : MonoBehaviour //enemy base class
{
    public GameObject Bullet;
    public GameObject Pickup;
    public float speed;
    public float maxHealth;
    public float currHealth;
    public float pointValue;
    public bool isBoss;

    public float upperY;
    public float midY;
    public float lowerY;
    
    public abstract void Start(); //abstract void for start needs to be in enemy scripts

    
    public abstract void Update(); //abstract void for update needs to be in enemy scripts

    public virtual void Move() //overriden in other clases
    {

    }
    public virtual void Attack() //overidden in other classes
    {

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        //if collides with player bullet
        if(collision.gameObject.CompareTag("PlayerBullet"))
        {
            Destroy(collision.gameObject);
            currHealth = currHealth - 5; //reduce health
            if(currHealth <= 0) //if health 0
            {
                Destroy(gameObject); //destroy object
                if (!GameManager.instance.GodMode) //checks if godmode is not enabled
                {
                    UIManager.instance.UpdateScore((int)pointValue); //increase score
                }
                int num = UnityEngine.Random.Range(0, 5); //get random num
                if(num % 2 == 0) //if num 2
                {
                    Instantiate(Pickup, transform.position, Quaternion.identity); //spawn a pickup
                }
                if(isBoss)
                {
                    EnemyManager.instance.StartSpawning();
                    EnemyManager.instance.StartBossSpawning();
                }

            }
        }
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("PlayerBullet"))
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

    public void isOffMap()
    {
        if(transform.position.x < -15)
        {
            Destroy(gameObject);
        }
    }
}
