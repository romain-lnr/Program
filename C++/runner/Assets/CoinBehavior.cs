using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CoinBehavior : MonoBehaviour
{

	public int value = 1;
	private GameObject UI;
	public Animator animator;
    // Start is called before the first frame update
    void Start()
    {
		UI = GameObject.FindGameObjectWithTag("CoinAmount");
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
	
	void OnTriggerEnter2D(Collider2D col){
		if(col.gameObject.CompareTag("Player")){
		int coinUI = int.Parse(UI.GetComponent<Text>().text) + value;
		UI.GetComponent<Text>().text = coinUI + "";
			animator.SetBool("IsCollect", true);
			
		}
	}
}