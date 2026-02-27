#include<stdio.h>
#include<string.h>
   int main(){
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier[66];

    } pokemon;
    pokemon arr[3];
    for( int i = 0; i<3; i++){
        scanf( "    %d " ,& arr[i].hp);
        scanf( "   %d " , &arr[i].speed);
        scanf( " %d " , &arr[i].attack);
        scanf( " %s " , arr[i].tier);
    }
    for ( int i = 0; i<3; i++){
        printf( "  hp is :  %d " ,arr[i].hp);
        printf( "  speed is :  %d " , arr[i].speed);
        printf( "  attack is  :  %d " , arr[i].attack);
        printf( "%s", arr[i].tier);
   }
   return 0; }