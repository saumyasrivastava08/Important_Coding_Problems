#include<stdio.h>

int binarySearch(int array[], int start, int end, int key) {
   if(start <= end) {
      int mid = (start + (end - start) /2); 
      if(array[mid] == key)
         return mid;
      if(array[mid] > key)
         return binarySearch(array, start, mid-1, key);
      else
         return binarySearch(array, mid+1, end, key);
   }
   return -1;
}

int exponentialSearch(int array[], int start, int end, int key){
   if((end - start) <= 0)
      return -1;
      int i = 1;
      while(i < (end - start)){
         if(array[i] < key)
            i *= 2; 
         else
            break; 
   }
   return binarySearch(array, i/2, i, key); 
}

int main(void) {
   int n, searchKey, loc;
   printf("Enter number of items: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter items: \n");
   for(int i = 0; i< n; i++) {
      scanf("%d",&arr[i]);
   }
   printf("Enter search key to search in the list: ");
   scanf("%d,&searchKey");
   if((loc = exponentialSearch(arr, 0, n, searchKey)) >= 0)
      printf("Item found at location: &d\n",loc);
   else
}