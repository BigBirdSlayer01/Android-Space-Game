using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class EvilSpaceShip : Enemy
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
            if (!startPosition)
            {
                startPos();
            }
            else
            {
                Move();
                Attack();
            }
            isOffMap();
        }
    }

    public override void Move()
    {
        if(transform.position.y == midY)
        {
            switch(Random.Range(0,2))
            {
                case 0:
                    target = new Vector2(xPos, upperY);
                    break;
                case 1:
                    target = new Vector2(xPos, lowerY);
                    break;
            }
        }
        else if(transform.position.y == upperY || transform.position.y == lowerY)
        {
            target = new Vector2(xPos , midY);
        }
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
    }

    public override void Attack()
    {
        if (transform.position.y == 2.6f || transform.position.y == -2.6f || transform.position.y == 0)
        {
            GameObject currBullet = Instantiate(Bullet);
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
            currBullet.transform.position = transform.position;
        }
    }

    void startPos()
    {
        Vector2 initalTarget = new Vector2(xPos, yPos);
        transform.position = Vector2.MoveTowards(transform.position, initalTarget, speed * Time.deltaTime);
        if(transform.position.x == initalTarget.x)
        {
            startPosition = true;
        }
    }
}
