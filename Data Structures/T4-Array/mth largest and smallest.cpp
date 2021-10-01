#include <iostream>
using namespace std;

void printarray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void sort(int* arr, int n){

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main(){
    int n = 6;
    int arr[] = {1,7,4,2,5,6};
    cout<<"The array is: "<<endl;
    printarray(arr,n);
    int position;
    cout<<"Enter the position -- > ";
    cin>>position;
    sort(arr,n);
    cout<<"The sorted array is: "<<endl;
    printarray(arr, n);
    cout<<"The smallest "<<position<<"th term is "<<arr[position-1]<<endl;
    cout<<"The largest "<<position<<"th term is "<<arr[n-position];
    return 0;
}