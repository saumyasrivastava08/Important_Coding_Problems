/* Problem : A Maze is given as N*N binary matrix of blocks where source block is the upper left most block i.e., maze[0][0] and destination block is lower rightmost block i.e., maze[N-1][N-1]. A rat starts from source and has to reach the destination. The rat can move only in two directions: forward and down. */

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

#define N 4

bool solveMazeUtil(
    int maze[N][N], int x,
    int y, int sol[N][N]);

void printSolution(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf(" %d ", sol[i][j]);
        printf("\n");
    }
}

bool isSafe(int maze[N][N], int x, int y)
{

    if (
        x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;

    return false;
}

bool solveMaze(int maze[N][N])
{
    int sol[N][N] = {{0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0},
                     {0, 0, 0, 0}};

    if (solveMazeUtil(
            maze, 0, 0, sol) == false)
    {
        printf("Solution doesn't exist");
        return false;
    }

    printSolution(sol);
    return true;
}

bool solveMazeUtil(
    int maze[N][N], int x,
    int y, int sol[N][N])
{

    if (
        x == N - 1 && y == N - 1 && maze[x][y] == 1)
    {
        sol[x][y] = 1;
        return true;
    }

    if (isSafe(maze, x, y) == true)
    {

        if (sol[x][y] == 1)
            return false;

        sol[x][y] = 1;

        if (solveMazeUtil(
                maze, x + 1, y, sol) == true)
            return true;

        if (solveMazeUtil(
                maze, x, y + 1, sol) == true)
            return true;

        /
            sol[x][y] = 0;
        return false;
    }

    return false;
}

//Main function
int main()
{
    int maze[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> maze[i][j];

    solveMaze(maze);
    return 0;
}
