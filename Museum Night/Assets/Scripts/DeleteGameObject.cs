using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeleteGameObject : MonoBehaviour {

	public GameObject objectToDelete;
	public GameObject player;
	public GameObject startExplorePoint;
	public int height = 2;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public void Delete (){
		objectToDelete.SetActive (false);
		Vector3 newposition = startExplorePoint.transform.position;
		//adjust the height OperatingSystemFamily person
		newposition.y += height;
		iTween.MoveTo (player, newposition, 5f);

	}

}
