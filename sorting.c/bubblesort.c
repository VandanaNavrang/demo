#include<stdio.h>
int main(){
     int arr[]= { 5,4,6,7,4,8};
     int  n =6;
     printf( " Given array : ");
      for( int i = 0; i< n; i++){ 
      printf( "    %d", arr[i]);}
       for ( int i = 0; i < n; i++){ 
         for( int j = 0;j< n-1;j++){
            if( arr[j]>arr[j+1]){ 
                int temp = arr[j+1];
                arr[j+1] = arr[i];
                arr[i] = temp;
            }
         }

       }
        
     printf(" \n");
     printf( " sorted array:  ");
     for( int i = 0; i < n; i++){
        printf ( " %d", arr[i]);
     }
















    return 0;
}