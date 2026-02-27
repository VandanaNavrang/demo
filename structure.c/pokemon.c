#include<stdio.h>
#include<string.h>
int main(){
   typedef struct student {
        int rollno;
        char name;
        float cgpa;

    } student;
    student s1;

    s1.rollno = 355656;
    strcpy(s1.name,"vandana");
    s1.cgpa= 7.3;
    printf( "  roll no : %d", s1.rollno);
    printf( "  roll no : %s", s1.name);
    printf( "  roll no : %f", s1.cgpa);
    return 0;

    

    
    



}