using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveMarker : MonoBehaviour {

    public int index;
    public float speedFactor;
    public float velocity;
    float startTime;
    float journeyLength;
    Vector3 startPostion = new Vector3(0.001f,0,0);
    Vector3 endPosition = new Vector3(60000,0,0);

    // Use this for initialization
    void Start () {
        startTime = Time.time;
        journeyLength = Vector3.Distance(startPostion, endPosition);
    }

    // Update is called once per frame
    void Update () {
        // Distance moved = time * speed.
        float distCovered = (Time.time - startTime) * velocity;

        // Fraction of journey completed = current distance divided by total distance.
        float fracJourney = distCovered / journeyLength;

        // Set our position as a fraction of the distance between the markers.
        transform.localPosition = Vector3.Lerp(startPostion, endPosition, fracJourney);

        index = (int)((transform.position.x / 6) * 150);
        if (index < 151)
        {
            velocity = (GetComponentInParent<BuildSheet>().q[index] / GetComponentInParent<BuildSheet>().hStag[index]) * speedFactor;
            startPostion = new Vector3(transform.localPosition.x, 0, 0);
        }
    }
}
