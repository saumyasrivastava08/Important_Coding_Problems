#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int l, int h, int p)
{
    int temp[h-l+1],index=0;
    for(int i=l;i<=h;i++)
        if(arr[i]<=arr[p])
            {
                temp[index]=arr[i];index++;
            }
    for(int i=l;i<=h;i++)
        if(arr[i]>arr[p])
            {
                temp[index]=arr[i];index++;
            }
    for(int i=l;i<=h;i++)
        arr[i]=temp[i-l];
}
 
int main() {
	
    	int n;
    	cout<<"Enter Number of elements \n";
	cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
	 cin>>arr[i];
	 int p;
	 cout<<"Enter a number from where user wants the partition \n";
	 cin>>p;
	partition(arr,0,n-1,p);
	for(int x: arr)
	    cout<<x<<" ";
}
