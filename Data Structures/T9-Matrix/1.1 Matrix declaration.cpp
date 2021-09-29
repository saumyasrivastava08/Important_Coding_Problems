#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

void print(int mat[3][2])
{
	for(int i = 0; i < 3; i++)
	{
		for(int	j = 0; j < 2; j++)
			cout << mat[i][j] << " ";
	}
}

int main()
{	
	int m = 3, n = 2;

	int mat[3][2] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	print(mat);

	return 0;
}
