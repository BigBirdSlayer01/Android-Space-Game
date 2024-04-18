using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chicken : Enemy
{
    Vector2 target = new Vector2();
    float lastPos;
    public override void Start()
    {
        currHealth = maxHealth;
        lastPos = 2.6f;
    }

    public override void Update()
    {
        if (GameManager.instance.gameActive)
        {
            Move();
            Attack();
            isOffMap();
        }
            
    }

    public override void Move() // moves the game object up and down while still moving toward the player
    { 
        if(transform.position.y == 2.6f || transform.position.y == -2.6f)
        {  
            target.y = 0;
            target.x = transform.position.x - 2.6f;
            if(transform.position.y == 2.6f)
            {
                lastPos = 2.6f;
            }
            else if(transform.position.y == -2.6f)
            {
                lastPos = -2.6f;
            }
        }
        else if(transform.position.y == 0)
        {
            if (lastPos == 2.6f)
            {
                target.y = -2.6f;
            }
            else if(lastPos == -2.6f)
            {
                target.y = 2.6f;
            }
            target.x = transform.position.x - 2.6f;
        }
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
    }

    public override void Attack() //shoots when at specific y coordinate
    {
        if(transform.position.y == 2.6f || transform.position.y == -2.6f || transform.position.y == 0)
        {
            GameObject currBullet = Instantiate(Bullet);
            currBullet.transform.position = transform.position;
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
        }
    }
}
