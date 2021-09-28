#include <bits/stdc++.h>
using namespace std;

//problem function
bool isTick(vector<vector<char>> vec, int n, int m, int i, int j)
{
    bool isStar = true;
    int diff = 1;
    while(i>=0)
    {
        if(i<0 || i>n || diff>j || j+diff>m)
            break;
        
        if(vec[i-1][j-diff] == '.' || vec[i-1][j+diff] == '.')
            isStar = false;
        
        i--;
        diff++;
        if(!isStar)
            break;
    }
    return isStar;
}

string tick(vector<vector<char>> vec, int n, int m, int k)
{
    int count = 0;
    for(int i=k; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vec[i][j] == '*')
                if(isTick(vec, n, m, i, j))
                    count++;
        }
    }
    if(count>0)
        return "YES";
        
    return "NO";
}

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		vector<vector<char>> vec;
		
		for(int i=0; i<n; i++)
		{
		    vector<char> v;
		    for(int j=0; j<m; j++)
		    {
                char x;
		        cin>>x;
		        v.push_back(x);
		    }
		    vec.push_back(v);
		}
		cout<<tick(vec, n, m, k)<<endl;
	}
	return 0;
}