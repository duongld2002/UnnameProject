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

    public bool canCall = true;
    private bool isGameStarted = false;
    private bool canAddPoints = true;
    //DrawState drawState;

    public Character character;

    public Collider startCollider;
    public Collider finishCollider;
    public Collider[] checkPointPlaces;

    public Collider[] walls;
    int v = 0;

    private void Awake()
    {
        lineRenderer = GetComponent<LineRenderer>();

        character = GameObject.FindGameObjectWithTag("Player").GetComponent<Character>();
    }

    private void Start()
    {
        startCollider = GameObject.FindGameObjectWithTag("StartPlace").GetComponent<Collider>();
        finishCollider = GameObject.FindGameObjectWithTag("FinishPlace").GetComponent<Collider>();
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
                //    if (checkpoint.bounds.Contains(hitInfo.point))
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
                //if (!startCollider.bounds.Contains(firstPoint) && !checkPointPlaces[i].bounds.Contains(lastPoint))
                //{
                //    canAddPoints = true;
                //    points.Clear();
                //    lineRenderer.positionCount = points.Count;
                //    isGameStarted = false;
                //    canCall = true;
                //    Debug.Log(firstPoint + " " + lastPoint);
                //    Debug.Log("!start && !chkpoint");
                //}
                //else if (startCollider.bounds.Contains(firstPoint) && !checkPointPlaces[i].bounds.Contains(lastPoint))
                //{
                //    canAddPoints = true;
                //    points.Clear();
                //    lineRenderer.positionCount = points.Count;
                //    isGameStarted = false;
                //    canCall = true;
                //    Debug.Log(firstPoint + " " + lastPoint);
                //    Debug.Log("startplace && !chkpoint");
                //}
                if (!startCollider.bounds.Contains(firstPoint))
                {
                    canAddPoints = true;
                    points.Clear();
                    lineRenderer.positionCount = points.Count;
                    isGameStarted = false;
                    canCall = true;
                    Debug.Log(firstPoint + " " + lastPoint);
                    Debug.Log("!start && !chkpoint");
                }
                //else if (startCollider.bounds.Contains(firstPoint) && checkPointPlaces[i].bounds.Contains(lastPoint))
                //{
                //    //character.gameState = GameState.Started;
                //    startCollider = checkPointPlaces[i];
                //
                //    canAddPoints = true;
                //    isGameStarted = false;
                //    OnNewPathCreated(points);
                //
                //    canCall = true;
                //
                //    TimeManager.Instance.cancelSlowMotion();
                //
                //    Debug.Log(firstPoint + " " + lastPoint);
                //    Debug.Log("start && chkpoint");
                //}
                else
                {
                    canAddPoints = true;
                    isGameStarted = true;
                    OnNewPathCreated(points);
                    canCall = false;
                    TimeManager.Instance.cancelSlowMotion();
                    //CameraManager.Instance.changeCameraRun();

                    if (finishCollider.bounds.Contains(lastPoint))
                    {
                        isGameStarted = true;
                        canCall = false;

                        character.levelState = LevelState.Pass;

                        Debug.Log("Finish");
                    }
                    else if (checkPointPlaces[i].bounds.Contains(lastPoint))
                    {
                        startCollider = checkPointPlaces[i];
                        isGameStarted = false;
                        canCall = true;

                        Debug.Log("chkpoint");
                    }
                }

                if (v < checkPointPlaces.Length - 1)
                    v++;
                break;
            }

            //}
        }
    }

}
