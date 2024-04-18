using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class TriangleEnemy : Enemy
{
    public float xPos;
    float yPos;
    bool startPosition;
    Vector2 target;
    bool canShoot;
    // Start is called before the first frame update
    public override void Start()
    {
        currHealth = maxHealth;
        yPos = transform.position.y;
        startPosition = false;
        canShoot = true;
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
                Attack();
            }
            isOffMap();
        }
    }

    public override void Attack()
    {
        if (canShoot)
        {
            GameObject currBullet = Instantiate(Bullet);
            currBullet.transform.position = transform.position;
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
            canShoot=false;
            StartCoroutine(WaitToShoot());
        }
    }

    IEnumerator WaitToShoot()
    {
        yield return new WaitForSeconds(2);
        canShoot = true;
    }

    void startPos()
    {
        Vector2 initalTarget = new Vector2(xPos, yPos);
        transform.position = Vector2.MoveTowards(transform.position, initalTarget, speed * Time.deltaTime);
        if (transform.position.x == initalTarget.x)
        {
            startPosition = true;
        }
    }
}
