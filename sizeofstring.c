#include<stdio.h>
#include<string.h>
int main(){
    char str[67]= "this world is very very selfish";
    
    int size = 0;
    int i =0;
    while(str[i]!='\0'){
        size++;
        i++;
    } 
    printf( " the size is : %d", size);
    return 0;
    }