#include<iostream>
using namespace std;
bool isArraySorted(int *a, int n){
  if(n==0 or n==1){
      return true;
  }
  if(a[0]<=a[1] and isArraySorted(a+1,n-1)){
      return true;
  }
  return false;
}
int main(){
  
  int a[]={2, 3, 7, -8, 3, -1};
  int n = sizeof(a)/sizeof(int);
  if(isArraySorted(a, n)){
    cout<<"Array is sorted";
  }
  else cout<<"Array is not sorted";
}
 
