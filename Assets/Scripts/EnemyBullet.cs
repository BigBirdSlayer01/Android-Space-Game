using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBullet : MonoBehaviour
{
    float Speed;
    float TimeToLive;
    // Start is called before the first frame update
    void Start()
    {
        Speed = -8;
        TimeToLive = 4;
        StartCoroutine(DestroyBullet());
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.instance.gameActive)
        {
            //moves bullet right
            Vector3 movement = new Vector3(Speed * Time.deltaTime, 0, 0);
            transform.Translate(movement);
        }
    }

    IEnumerator DestroyBullet() //destroy bullet after 4 seconds
    {
        yield return new WaitForSeconds(TimeToLive); //waits the shoot time
        Destroy(gameObject);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.gameObject.CompareTag("PlayerBullet"))
        {
            //Destroy(gameObject);
        }
    }
}
