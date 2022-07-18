using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PathMoverTest : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;
    public Queue<Vector3> pathPoints = new Queue<Vector3>();

    public bool canMove;

    private void Awake()
    {
        navMeshAgent = GetComponent<NavMeshAgent>();
        FindObjectOfType<PathCreator>().OnNewPathCreated += SetPoints;
    }

    private void SetPoints(IEnumerable<Vector3> points)
    {
        //character.gameState = GameState.Started;
        pathPoints = new Queue<Vector3>(points);
    }

    private void Update()
    {

        if (canMove)
            UpdatePathing();
    }

    private void UpdatePathing()
    {
        if (ShouldSetDestination())
        {
            //player.transform.LookAt(pathPoints.Peek());

            navMeshAgent.SetDestination(pathPoints.Dequeue());
            Debug.Log(pathPoints.Count);
        }
    }

    private bool ShouldSetDestination()
    {
        if (pathPoints.Count == 0)
            return false;


        if (navMeshAgent.hasPath == false || navMeshAgent.remainingDistance < 0.5f)
            return true;


        return false;
    }
}
