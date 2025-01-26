//beecrowd | 1098 | Sequence IJ 4
#include<stdio.h>
int main(){
    
    float i=0.2 , j1=1.2,j2=2.2,j3=3.2;
    
    printf("I=0 J=1\n");
    printf("I=0 J=2\n");
    printf("I=0 J=3\n");
    
    do{
    printf("I=%.1f J=%.1f\n",i,j1);
    printf("I=%.1f J=%.1f\n",i,j2);
    printf("I=%.1f J=%.1f\n",i,j3);
    i+=.2;
    j1+=.2;
    j2+=.2;
    j3+=.2;
    }while(i<=.9);
    printf("I=1 J=2\n");
    printf("I=1 J=3\n");
    printf("I=1 J=4\n");

    i=1.2; 
    j1=2.2;
    j2=3.2;
    j3=4.2;
    do{
    printf("I=%.1f J=%.1f\n",i,j1);
    printf("I=%.1f J=%.1f\n",i,j2);
    printf("I=%.1f J=%.1f\n",i,j3);
    i+=.2;
    j1+=.2;
    j2+=.2;
    j3+=.2;
    }while(i<=1.9);
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");

    return 0;
}