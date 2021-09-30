### BALANCED ARRAY

My approach:
I will ask declare two variables s1 and s2, which will represent the sum of right and left part of the array. Then, I will subtract them to find the minimum value that is required to make them equal. The difference can be found by using absoulte function , or it can also be done by using if-else functions.
```c++
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter number of elements(even number): ";
	cin>>n;
	int a[n];
	cout<<"Enter array elements:\n";
	for(int i=0;i<n;++i){
	   	cin>>a[i];
	}
	
   //s1 will contain the sum of left part of the array
   int s1=0;
   
   //s2 will contain the sum of right part of the array
   int s2=0;   
   
   for(int i=0;i<n/2;i++){
       s1+=a[i];     
   }
   for(int i=n/2;i<n;i++){
       s2+=a[i]; 
   } 
    //we need to find their difference to find the minimum value.
   cout<< abs(s1-s2);  
   return 0;
} 
```
