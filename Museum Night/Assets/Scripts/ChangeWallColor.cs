using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeWallColor : MonoBehaviour {
	
	public int wallsNumber;
	public GameObject [] walls;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

	}

	public void changeColor () {

		Color whateverColor = new Color(Random.value, Random.value, Random.value, 1);
		for (int i = 0; i < walls.Length; i++) {
			MeshRenderer gameObjectRenderer = walls[i].GetComponent<MeshRenderer>();
			Material myMaterial = new Material(gameObjectRenderer.material);
			myMaterial.color = whateverColor;//Color.red;
			if (i == 2)
				gameObjectRenderer.materials[1].color = whateverColor;
			else
				gameObjectRenderer.material = myMaterial;
			//Material newMaterial = new Material(Shader.Find("Standard"));

			//newMaterial.color = whateverColor;
			//gameObjectRenderer.material = newMaterial ;
			//gameObjectRenderer.material.SetColor("_Color", whateverColor); //= whateverColor ;

		}	
	}

}

