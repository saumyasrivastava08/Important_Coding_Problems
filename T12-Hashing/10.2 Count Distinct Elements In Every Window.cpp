#include <bits/stdc++.h>
using namespace std;

void printDistinct(int arr[], int n, int k)
{
    map<int, int> m; 
   
    for (int i = 0; i < k; i++) { 
        m[arr[i]] += 1; 
    } 
   
    cout << m.size() << " "; 
   
    for (int i = k; i < n; i++) { 
        
        m[arr[i - k]] -= 1;
        
        if (m[arr[i - k]] == 0) { 
            m.erase(arr[i-k]); 
        }   
        m[arr[i]] += 1; 
   
        cout << m.size() << " "; 
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
