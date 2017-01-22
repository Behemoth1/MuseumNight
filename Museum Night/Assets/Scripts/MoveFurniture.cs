using UnityEngine;

public class MoveFurniture : MonoBehaviour {

		public GameObject [] objects;
	    public Transform [] transform;
	    private bool isFirstPositionActive = true;

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {

	}
	private void moveToPosition(bool isFirstPositionActive){
		for (int i = 0; i < objects.Length; i++){
			Quaternion tempRotation = objects [i].transform.rotation;
			Vector3 tempPosition = objects [i].transform.position;
			objects[i].transform.position = transform[i].position;
			objects[i].transform.rotation = transform[i].rotation;
			transform [i].position = tempPosition;
			transform[i].rotation = tempRotation;
		}
	}
	public void  MoveFurnitureToNewPosition() {
		isFirstPositionActive = (isFirstPositionActive) ? false : true;
		moveToPosition (isFirstPositionActive);
	}

}

