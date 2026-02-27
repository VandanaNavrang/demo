#include<stdio.h>
#include<string.h>
int main(){
    char str[67]= "this world is very very selfish";
    int j,temp;
    int size = 0;
    int i =0;
    while(str[i]!='\0'){
        size++;
        i++;
    } 
    printf( " the size is : %d", size);
    for ( i=0; j = size-1; i < j; i++; j--);
     temp = str[i] ;
    str[i]= str[j];
    str[j]=temp;
    printf( " the reverse code is : %s",str);
        return 0;

}