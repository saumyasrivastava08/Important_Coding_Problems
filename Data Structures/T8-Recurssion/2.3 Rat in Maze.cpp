//Prints the path from start to destination
#include<iostream>
using namespace std;

int sol[1000][1000] = {0};
bool RatInMaze(char maze[][5], int i, int j, int n, int m) {
  //base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}
	//recursive case
	sol[i][j] = 1;
	if (j + 1 < m and maze[i][j + 1] != '1') {
		bool RatInMazeRecRight = RatInMaze(maze, i, j + 1, n, m);
		if (RatInMazeRecRight)
		{
			return true;
		}
	}
	if (i + 1 < n and maze[i + 1][j] != '1') {
		bool RatInMazeRecDown = RatInMaze(maze, i + 1, j, n, m);
		if (RatInMazeRecDown) {
			return true;
		}
	}


	sol[i][j] = 0;
	return false;

}
int main(int argc, char const *argv[])
{
	char maze[][5] = {
		"0000",
		"0011",
		"0000",
		"1100"
	};
  
	RatInMaze(maze, 0, 0, 4, 4);
	return 0;
}
