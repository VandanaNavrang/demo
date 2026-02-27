#include<stdio.h>
int main(){
     char x[] = {"vandana"};
//     // int i=0;
//      while(i<8){  
//      printf("%c",x[i]);
//      i++;}//
     int j= 0;
     x[0]= 'n';
     x[4] = 67;
     while(j<7){  
     printf("%c",x[j]);
     ++;}

     return 0;
}