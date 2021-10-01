#include<stdio.h>
#include<math.h>

int jump_Search(int a[], int n, int item) {
   int i = 0;
   int m = sqrt(n); 

   while(a[m] <= item && m < n) { 
      i = m;  
      m += sqrt(n);
      if(m > n - 1)  
         return -1; 
   }

   for(int x = i; x<m; x++) { 
      if(a[x] == item)
         return x; 
   }
   return -1;
}

int main() {
   int n, item, loc;
    printf( "\n Enter number of items: ");
   scanf("%d",&n);
   int arr[n]; 
    printf( "\n Enter items: ");

   for(int i = 0; i< n; i++) {
      scanf("%d",&arr[i]);
   }

   printf("\n Enter search key to be found in the array: ");
   scanf("%d",&item);
   loc = jump_Search(arr, n, item);
   if(loc>=0)
        printf( "\n Item found at location: &d",loc);
   else
        printf( "\n Item is not found in the list.");
}