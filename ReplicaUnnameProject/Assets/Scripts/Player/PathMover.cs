using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PathMover : MonoBehaviour
{
    private NavMeshAgent navMeshAgent;
    public Queue<Vector3> pathPoints = new Queue<Vector3>();

    Character character;

    public bool canMove;

    private void Awake()
    {
        character = GetComponent<Character>();

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
        checkState();

        if (canMove) 
            UpdatePathing();
    }

    private void checkState()
    {
        if (pathPoints.Count > 0)
        {
            character.playerState = PlayerState.Run;
        }
        else if (character.currentHealth > 0 && pathPoints.Count == 0 && character.gameState == GameState.NotStart)
        {
            character.playerState = PlayerState.Idle;
        }
        else if (character.currentHealth > 0 && pathPoints.Count == 0
            && character.gameState == GameState.Started && character.levelState == LevelState.NotPass)
        {
            character.playerState = PlayerState.Lose;
        }
        else if (character.currentHealth > 0 && pathPoints.Count == 0
            && character.gameState == GameState.Started && character.levelState == LevelState.Pass)
        {
            character.playerState = PlayerState.Win;
        }
        else if (character.currentHealth <= 0 && pathPoints.Count == 0)
        {
            character.playerState = PlayerState.Die;
        }
    }

    private void UpdatePathing()
    {
        if (ShouldSetDestination())
        {
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
