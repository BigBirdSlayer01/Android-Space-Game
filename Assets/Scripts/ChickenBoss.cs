using GameAnalyticsSDK;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class ChickenBoss : Enemy
{
    public float xPos;
    float yPos;
    bool startPosition;
    Vector2 target;
    bool canShoot;
    float[] yVals = new float[3];

    // Start is called before the first frame update
    public override void Start()
    {
        currHealth = maxHealth;
        yPos = transform.position.y;
        startPosition = false;
        canShoot = true;
        
        yVals[0] = upperY;
        yVals[1] = lowerY;
        yVals[2] = midY;
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
            if (currHealth <= 0)
            {
                GooglePlayManager.instance.GiveAchievement("CgkIhuiA2dcfEAIQAw");
                GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Boss3_Beaten", GameManager.instance.score);
            }
        }
    }

    public override void Attack()
    {
        if (canShoot)
        {
            int i = Random.Range(0, yVals.Length);
            float y = yVals[i];
            Vector2 bulletStartPos = new Vector2(transform.position.x, y);
            GameObject currBullet = Instantiate(Bullet);
            currBullet.transform.position = bulletStartPos;
            SoundManager.Instance.PlaySound(SoundManager.Instance.EnemyShoot);
            canShoot = false;
            StartCoroutine(WaitToShoot());
        }
    }

    IEnumerator WaitToShoot()
    {
        yield return new WaitForSeconds(1);
        canShoot = true;
    }

    void startPos()
    {
        Vector2 initalTarget = new Vector2(11, 0);
        transform.position = Vector2.MoveTowards(transform.position, initalTarget, speed * Time.deltaTime);
        if (transform.position.x == initalTarget.x)
        {
            startPosition = true;
        }
    }
}