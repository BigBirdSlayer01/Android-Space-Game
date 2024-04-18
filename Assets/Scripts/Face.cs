using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.GraphicsBuffer;

public class Face : Enemy
{
    public override void Start()
    {
        currHealth = maxHealth;
    }

    public override void Update()
    {
        if (GameManager.instance.gameActive)
        {
            Move();
            isOffMap();
        }
    }
  
    public override void Move() //moves in straight line on the x axis
    {
        Vector2 move = new Vector2(-speed * Time.deltaTime,0);
        transform.Translate(move);
    }
}
