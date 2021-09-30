### Program to find k largest elements of an unsorted array and printing them.
```c++
#include<iostream>  //declaring required header file
using namespace std;

int main()
{
  int n,i,j,k;  //declaring variables
  cout<<"Enter number of elements of array: ";
  cin>>n;   
  int ar[n];
  cout<<"Enter the value of k: ";
  cin>>k;
  cout<<"Enter array elements:\n";
  for(i=0;i<n;i++)
  {
      cin>>ar[i]; 
  } 
  // Bubble sort for sorting the array in descending order
  int temp;  // we will use temp to swap the array elements if required.
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++){
          if(ar[j]>ar[i])
          {
              temp=ar[i];
              ar[i]=ar[j];
              ar[j]=temp;
          }
      }
  }
  //now, array is sorted in descending orer
  cout<<"Printing k largest elements:\n";
  for(i=0;i<k;i++)
  {   //printing the first k elements as asked in question
      cout<<ar[i]<<" ";
  }
}
```
### OUTPUT:
```c++
Enter number of elements of array: 10
Enter the value of k: 6
Enter array elements:
12 32 77 99 18 29 11 40 26 55
Printing k largest elements:
99 77 55 40 32 29 
```

