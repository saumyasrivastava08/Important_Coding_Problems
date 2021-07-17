#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n, int k)
{
    for(int i=0;i<=n-k;i++){
        int count=0;
        for(int j=0;j<k;j++){
            bool flag=false;
            for(int p=0;p<j;p++){
                if(arr[i+j]==arr[i+p])
                {
                    flag=true;break;
                }
            }
            if(flag==false)count++;
            
        }
        cout<<count<<" ";
    }
}

int main()
{
   int n;
	cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    printDistinct(arr, n, k);
}
