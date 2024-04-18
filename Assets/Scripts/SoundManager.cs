using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager Instance;

    //stores the audio sources
    public AudioSource MusicSource;
    public AudioSource EffectSource;
    public AudioSource GunSource;

    //stores the audio clips
    public AudioClip Shoot;
    public AudioClip EnemyShoot;
    public AudioClip Reload;
    public AudioClip Pickup;

    private void Awake()
    {
        Instance = this;
    }

    //play sounds
    public void PlaySound(AudioClip sound)
    {
        EffectSource.PlayOneShot(sound);
    }
    //plays gun effects
    public void PlayGun(AudioClip sound)
    {
        GunSource.PlayOneShot(sound);
        Debug.Log("Shoot");
    }

}
