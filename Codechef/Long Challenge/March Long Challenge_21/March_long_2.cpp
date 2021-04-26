#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long a,n ;
	    cin>>n;
	    vector<int>arr;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a;
	    	arr.push_back(a);
		}
		sort(arr.begin(),arr.end());
		long long c=0,f=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]>(i+1))
			 {
			 	f=1;
			 //	cout<<"Second"<<"\n";
			 	break;
			 }
			 else
			 {
			 	c=c+(abs((i+1)-arr[i]));
			 }
		}
		if((c%2==0 || f==1))
			cout<<"Second"<<"\n";
			else
				cout<<"First"<<"\n";
	    
    }
}

