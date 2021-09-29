#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;


int main()
{	
int R,C;
cin>>R>>C;
	int mat[R][C];
	for(int i=0;i<R;i++)
	{
		for(int j=0;j<C;j++)
		{
			cin>>mat[i][j];
		}
	
	}

  int top = 0, left = 0, bottom = R - 1, right = C - 1;
   //  int mat[R][C];
	while(top <= bottom && left <= right)
	{
		for(int i = left; i <= right; i++)
			cout << mat[top][i] << " ";

		top++;

		for(int i = top; i <= bottom; i++)
			cout << mat[i][right] << " " ;
		
		right--;

		if(top <= bottom){
		for(int i = right; i >= left; i--)
			cout << mat[bottom][i] << " ";

		bottom--;
		}

		if(left <= right){
		for(int i = bottom; i >= top; i--)
			cout << mat[i][left] << " ";

		left++;
		}			
	}

	return 0;
}
