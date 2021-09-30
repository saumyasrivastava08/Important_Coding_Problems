//Program to find all occurrences of a number(key) in an array
#include<iostream>
using namespace std;
void allOccurrences(int i, int *a, int n, int key){
  if(i==n){
    return;
  }
  if(a[i]==key){
    cout<<key<<" found at index: "<<i<<endl;
  }
  allOccurrences(i+1,a,n,key);
}
int main(){
  int a[]={7,8,-2,3,-2,5,-2,4,7};
  int n=sizeof(a)/sizeof(int);
  int key = -2;
  allOccurrences(0, a, n, key);
}
  
  
