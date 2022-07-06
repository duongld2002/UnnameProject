using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public enum DrawState
{
    notDraw, Drawn
}

public class PathCreator : MonoBehaviour
{
    public LayerMask ignoreLayer;
    private LineRenderer lineRenderer;

    public List<Vector3> points = new List<Vector3>();

    public Action<IEnumerable<Vector3>> OnNewPathCreated = delegate { };

    private bool canCall = true;
    private bool isGameStarted = false;
    //DrawState drawState;

    public Character character;

    public Collider startCollider;
    public Collider[] checkPointPlaces;
    int v = 0;

    private bool canAddPoints = true;

    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();

        character = GameObject.FindGameObjectWithTag("Player").GetComponent<Character>();
    }

    private void Update()
    {
        if (canCall)
            drawAPath();
            
        if (isGameStarted == true)
            character.gameState = GameState.Started;

        if (isGameStarted == false)
            character.gameState = GameState.NotStart;
    }

    private float DistanceToLastPoint(Vector3 point)
    {
        if (!points.Any())
            return Mathf.Infinity;
        return Vector3.Distance(points.Last(), point);
    }

    private void drawAPath()
    {

        if (Input.GetMouseButtonDown(0))
            points.Clear();

        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hitInfo;

            if (Physics.Raycast(ray, out hitInfo, Mathf.Infinity, ignoreLayer))
            {
                if (DistanceToLastPoint(hitInfo.point) > 0.5f)
                {
                    if (canAddPoints)
                    {
                        points.Add(hitInfo.point + new Vector3(0, 0.1f, 0));

                        lineRenderer.positionCount = points.Count;
                        lineRenderer.SetPositions(points.ToArray());
                    }
                }

                //foreach(var checkpoint in checkPointPlaces)
                //{
                //    if (checkpoint.bounds.Contains(hitInfo.point + new Vector3(0, 0.1f, 0)))
                //    {
                //        canAddPoints = false;
                //        canCall = true;
                //    }
                //}
            }
        }
        else if (Input.GetMouseButtonUp(0))
        {
            Vector3 firstPoint = points[0];
            Vector3 lastPoint = points.Last();

            //foreach (var checkpoint in checkPointPlaces)
            //{
            for (int i = v; i < checkPointPlaces.Length; i++)
            {
                Debug.Log(v);
                if (!startCollider.bounds.Contains(firstPoint) && !checkPointPlaces[i].bounds.Contains(lastPoint))
                {
                    canAddPoints = true;
                    points.Clear();
                    lineRenderer.positionCount = points.Count;
                    isGameStarted = false;
                    canCall = true;
                    Debug.Log("**" + checkPointPlaces[i]);
                }
                else if (startCollider.bounds.Contains(firstPoint) && checkPointPlaces[i].bounds.Contains(lastPoint))
                {
                    //character.gameState = GameState.Started;
                    startCollider = checkPointPlaces[i];
                
                    canAddPoints = true;
                    isGameStarted = false;
                    OnNewPathCreated(points);
                
                    canCall = true;

                    TimeManager.Instance.cancelSlowMotion();
                }
                else
                {
                    canAddPoints = true;
                    isGameStarted = true;
                    OnNewPathCreated(points);

                    canCall = false;
                }

                if (v < checkPointPlaces.Length - 1)
                    v++;
                Debug.Log(i);
                break;
            }

            //}
        }
    }

}
