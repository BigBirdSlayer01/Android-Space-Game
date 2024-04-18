using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    float Speed;
    float TimeToLive;
    // Start is called before the first frame update
    void Start()
    {
        transform.position = GameManager.instance.thePlayer.transform.position; //sets position to player position
        Speed = 8; //sets speed
        TimeToLive = 4;
        StartCoroutine(DestroyBullet());
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.instance.gameActive)
        {
            //moves bullet forward
            Vector3 movement = new Vector3(Speed * Time.deltaTime, 0, 0); 
            transform.Translate(movement);
            if(transform.position.x > 11)
            {
                Destroy(gameObject);
            }
        }
    }

    IEnumerator DestroyBullet() //bullet destroyed after 4 seconds
    {
        yield return new WaitForSeconds(TimeToLive); //waits the shoot time
        Destroy(gameObject);
    }
}
