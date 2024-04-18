using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class Fish : Enemy
{
    public float leftXPos;
    public float rightXPos;
    public float midXPos;
    float yPos;
    bool startPosition;
    Vector2 target = new Vector2();

    public override void Start()
    {
        startPosition = false;//startpos not at
        yPos = transform.position.y; //sets the ypos var
    }

    public override void Update()
    {
        if (GameManager.instance.gameActive) //if game active
        {
            if (!startPosition) //if not at start pos
            {
                startPos(); //move to start pos
            }
            else //if reached start position
            {
                //move and attack
                Move();
                Attack();
            }
            isOffMap();
        }
    }

    public override void Move()
    {
        if (transform.position.x == midXPos) //if in middle go up or down randomly
        {
            switch (Random.Range(0, 2))
            {
                case 0:
                    target = new Vector2(leftXPos, yPos);
                    break;
                case 1:
                    target = new Vector2(rightXPos, yPos);
                    break;
            }
        }
        else if (transform.position.x == leftXPos || transform.position.x == rightXPos) //if top or bottom go middle
        {
            target = new Vector2(midXPos, yPos);
        }
        transform.position = Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
    }

    public override void Attack() //shoot when at specific points
    {
        if (transform.position.x == leftXPos || transform.position.x == rightXPos || transform.position.x == midXPos)
        {
            GameObject currBullet = Instantiate(Bullet);
            currBullet.transform.position = transform.position;
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
        }
    }

    void startPos() //moves to start position x coordinate
    {
        Vector2 initalTarget = new Vector2(midXPos, yPos);
        transform.position = Vector2.MoveTowards(transform.position, initalTarget, speed * Time.deltaTime);
        if (transform.position.x == initalTarget.x)
        {
            startPosition = true;
        }
    }
}
