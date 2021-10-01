#include <iostream>

using namespace std;

int main()
{
    int x, cnt=0, hire=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        if(arr[i]>0){
            hire=hire+arr[i];
        }
        else{
            if(hire !=0){
                hire=hire-1;
            }
            else{
                cnt=cnt+1;
            }
        }
    }
    cout<<cnt;
    return 0;
}
