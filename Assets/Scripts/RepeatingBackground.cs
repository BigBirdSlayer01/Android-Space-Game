using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RepeatingBackground : MonoBehaviour
{
    private Vector3 startPos;
    float speed = 5;

    // Start is called before the first frame update
    void Start()
    {
        startPos = new Vector3(35.1f,-0.39f,0); //sets the start pos
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.left * Time.deltaTime * speed); //move background left
        if (transform.position.x < -29) //if position x is -29
        {
            transform.position = startPos; //reset to start pos
        }
    }
}
