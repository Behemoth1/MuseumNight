using UnityEngine;

public class toggleActiveState : MonoBehaviour {

	public GameObject [] objects;
	public bool activeByDefaut = false;
	private bool currentState = false;
	// Use this for initialization
	void Start () {
		currentState = activeByDefaut;
		setObjectsState (currentState);
	}

	// Update is called once per frame
	void Update () {

	}
	private void setObjectsState(bool state){
		for (int i = 0; i < objects.Length; i++)
			objects [i].SetActive (state);
	}

	public void toggleActivationState() {
		currentState = (currentState) ? false : true;
		setObjectsState (currentState);
	}

}
