using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoinisAlive : MonoBehaviour
{
	public bool isAlive = true;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
	if (!isAlive){
		Destroy(gameObject);
     	}   
    }
}
