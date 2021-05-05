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
        int res=0,curr=0;
        for(int i=0;i<n;i++)
        {
        //	int curr=0;
        	if(arr[i]==0)
        	{
        		curr=0;
			}
			else
			{
				curr++;
				res=max(res,curr);
			}
		}
		cout<<res<" ";
    }
