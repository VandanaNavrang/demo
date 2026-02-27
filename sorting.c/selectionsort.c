#include<stdio.h>
#include<limits.h>
int main(){
      int arr[]= { 5,4,2,3,6,7};
      int i = 0;
      int n = 6;
      printf( " unsorted array : ");
      for( i = 0; i < n; i++){ 
        
         printf( "%d" , arr[i]);
      }
      for ( int i = 0; i < n-1; i++){
        int min = INT_MAX;
       int minidex = -1;
        for ( int j=i;j<n-1; j ++){ 
            if( min > arr[j]){
                min = arr[j];
                minidex= j;
            }}
            int temp = arr[minidex];
             arr[minidex] = arr[i];
             arr[i]=temp;}

        printf( " sorted array : ");
        for( i = 0; i < n; i++){ 
            
         printf( "%d" , arr[i]);
      }
      return 0;

      }
    
      














