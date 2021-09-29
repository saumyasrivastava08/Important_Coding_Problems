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
   int x;
   cout<<"\n"<<"Enter number to search \n";
   cin>>x;
   int i  = 0, j = C - 1,f=0;

	while(i < R && j >= 0)
	{
		if(mat[i][j] == x)
		{
			cout << "Found at (" << i << ", " << j << ")";
			f=1;
			  break;
		}
		else if(mat[i][j] > x)
		{
			j--;
		}
		else
		{
			i++;
		}
	}
		if(f==0)
	cout << "Not Found";
	
}
