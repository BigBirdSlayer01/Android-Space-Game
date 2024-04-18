using JetBrains.Annotations;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//contains the states that the pickup can be
public enum thisEnum
{
    Health,
    Damage
};

public class Pickup : MonoBehaviour
{
    public thisEnum Type = new thisEnum(); //contains which type of pickup it is
    public Sprite[] sprites; //holds sprites
    float speed; //pickup speed

    // Start is called before the first frame update
    void Start()
    {
        speed = 4; //sets the speed
        int type = Random.Range(0,sprites.Length); //randomises the type
        GetComponent<SpriteRenderer>().sprite = sprites[type]; //sets the sprite
        Type = (thisEnum)type; //sets the type
    }

    // Update is called once per frame
    void Update()
    {
        Move(); //calls the move method
    }

    //moves the pickup left
    public void Move()
    {
        Vector2 move = new Vector2(-speed * Time.deltaTime, 0);
        transform.Translate(move);
    }
}

public enum HeuristicMethod
{
    Octile,
    Euclidean,
    Manhattan,
    Diagonal
}


