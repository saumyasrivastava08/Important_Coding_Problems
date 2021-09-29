#include<bits/stdc++.h>
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
	if(R == 1)
	{
		for(int i = 0; i < C; i++)
			cout << mat[0][i] << " ";
	}
	else if(C == 1)
	{
		for(int i = 0; i < R; i++)
			cout << mat[i][0] << " ";
	}
	else
	{
		for(int i = 0; i < C; i++)
			cout << mat[0][i] << " ";
		for(int i = 1; i < R; i++)
			cout << mat[i][C - 1] << " ";
		for(int i = C - 2; i >= 0; i--)
			cout << mat[R - 1][i] << " ";
		for(int i = R - 2; i >= 1; i--)
			cout << mat[i][0] << " ";
	}

}
