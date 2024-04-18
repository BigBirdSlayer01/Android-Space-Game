using GameAnalyticsSDK;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;
using UnityEngine.UIElements;
using Random = UnityEngine.Random;

public class TentacleBoss : Enemy
{
    public GameObject UpperTentacle;
    public GameObject MiddleTentacle;
    public GameObject LowerTentacle;
    public float xTarget;

    Vector2 UpperTentaclePos;
    Vector2 MiddleTentaclePos;
    Vector2 LowerTentaclePos;
    GameObject[] t = new GameObject[3];
    
    public override void Start()
    {
        UpperTentaclePos = UpperTentacle.transform.position;
        MiddleTentaclePos = MiddleTentacle.transform.position;
        LowerTentaclePos = LowerTentacle.transform.position;
        t[0] = UpperTentacle;
        t[1] = MiddleTentacle;
        t[2] = LowerTentacle;
        StartCoroutine(WaitToAttack());
    }

    public override void Update()
    {
        if(currHealth <= 0)
        {
            GooglePlayManager.instance.GiveAchievement("CgkIhuiA2dcfEAIQAQ");
            GameAnalytics.NewProgressionEvent(GAProgressionStatus.Complete, "Boss1_Beaten",GameManager.instance.score);
        }
    }

    public override void Move()
    {
        
    }

    public override void Attack()
    {
        int index = Random.Range(0, t.Length);
        StartCoroutine(FickerColour(t[index]));
    }

    IEnumerator FickerColour(GameObject attacker)
    {
        attacker.GetComponent<SpriteRenderer>().color = Color.red;
        yield return new WaitForSeconds(0.5f);
        attacker.GetComponent<SpriteRenderer>().color = Color.white;
        yield return new WaitForSeconds(0.5f);
        attacker.GetComponent<SpriteRenderer>().color = Color.red;
        yield return new WaitForSeconds(0.5f);
        attacker.GetComponent<SpriteRenderer>().color = Color.white;
        yield return new WaitForSeconds(0.5f);
        Vector2 target = new Vector2();
        Vector2 currPos = new Vector2();
        target.x = xTarget;
        target.y = attacker.transform.position.y;
        currPos = attacker.transform.position;
        Debug.Log("A: " + target);
        attacker.transform.position = target;//Vector2.MoveTowards(transform.position, target, speed * Time.deltaTime);
        StartCoroutine(ReturnTentacle(attacker, currPos));
    }

    IEnumerator WaitToAttack()
    {
        yield return new WaitForSeconds(5);
        Attack();
        StartCoroutine(WaitToAttack());
    }

    IEnumerator ReturnTentacle(GameObject te, Vector2 returnPos)
    {
        yield return new WaitForSeconds(1);
        te.transform.position = returnPos;

    }
}
