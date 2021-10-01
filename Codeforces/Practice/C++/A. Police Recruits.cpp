#include <iostream>

using namespace std;

int main()
{
    int y, cnt=0, hire=0;
    cin>>y;
    int arr[y];
    for(int i=0;i<y;i++){
        cin>>arr[i];
    }
    for(int i=0;i<y;i++){
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
