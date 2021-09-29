//Maximum consecutive 1's in Binary array
#include <bits/stdc++.h>
using namespace std;
int main() {
    
        int n;
        cout<<"Enter number of elements in array \n";
        cin>>n;
       vector<int>arr;
       int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        int res=1,curr=1;
        for(int i=0;i<n;i++)
        {
        //	int curr=0;
        	if((arr[i]%2==0 && arr[i+1]%2!=0 )|| (arr[i]%2!=0 && arr[i+1]%2==0 ) )
        	{
             	 curr++;
				res=max(res,curr);
			}
			else
			{ 
			    curr=1;
				
			}
		}
		cout<<res<" ";
    }
