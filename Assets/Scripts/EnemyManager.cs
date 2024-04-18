using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour
{
    public static EnemyManager instance; // makes the enemy manager an instance

    public GameObject[] Enemies; //contains the enemy prefabs
    public GameObject[] Bosses; //contains the bosses that can be spawned
    public GameObject[] SpawnZones; //contains the spawn zones
    public float waitTime; //for the wait time between spawning enemies

    bool Boss1Spawned;
    bool Boss2Spawned;
    bool Boss3Spawned;

    private void Awake()
    {
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        waitTime = 5;
        Boss1Spawned = false;
        Boss2Spawned = false;
        Boss3Spawned = false;
        //StartCoroutine(Spawner());
    }


    //method that spawns a random enemy in one of 3 possitions a
    void SpawnEnemy()
    {
        GameObject thisZone = SpawnZones[Random.Range(0,SpawnZones.Length)];
        GameObject enemyToSpawn = Enemies[Random.Range(0, Enemies.Length)];
        GameObject thisEnemy = Instantiate(enemyToSpawn, thisZone.transform.position, Quaternion.identity);
    }

    //method can be called to start the enemy spawning Coroutine
    public void StartSpawning()
    {
        StartCoroutine(Spawner());
    }

    public void StartBossSpawning()
    {
        StartCoroutine(BossSpawner());
    }

    //Coroutine to spawn enemies periodically
    public IEnumerator Spawner()
    {
        yield return new WaitForSeconds(waitTime);
        SpawnEnemy();
        StartCoroutine(Spawner());
    }

    public IEnumerator BossSpawner()
    {
        yield return new WaitForSeconds(60);
        StopCoroutine(Spawner());
        if(!Boss1Spawned)
        {
            //spawn boss 1
            Boss1Spawned = true;// Boss1 is spawned check is set to true
            Vector2 spawningPosition = new Vector2(-1f, -0.1088335f); //stores position to store first boss
            GameObject tempBoss = Instantiate(Bosses[0], spawningPosition, Quaternion.identity); //spawns the boss game object
            StopCoroutine(BossSpawner());
        }
        else if(!Boss2Spawned)
        {
            //spawn boss 2
            GameObject thisZone = SpawnZones[Random.Range(0, SpawnZones.Length)]; //gets a random spawn position for the boss
            GameObject tempBoss = Instantiate(Bosses[1], thisZone.transform.position, Quaternion.identity); //spawns the boss game object
            Boss2Spawned = true; // Boss2 is spawned check is set to true
            StopCoroutine(BossSpawner());
        }
        else if(!Boss3Spawned)
        {
            //spawn boss 3
            Vector2 bossPos = new Vector2(17, 0);
            GameObject tempBoss = Instantiate(Bosses[2], bossPos, Quaternion.identity);
            //reset Boss bool to make game endless
            Boss1Spawned = false;
            Boss2Spawned = false;
            Boss3Spawned = false;
        }
    }
}
