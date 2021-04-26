#include <bits/stdc++.h>
using namespace std;
int main() {
    
        int n;
        cin>>n;
       vector<int>arr;
       int a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            arr.push_back(a);
        }
        
         int res=INT_MIN;
         int end=0;
         for(int i=0;i<n;i++){
              end=end+arr[i];
            if(res<end)
              res=end;
            if(end<0)
              end=0;
            
    }
    cout<<res<<" ";

}
