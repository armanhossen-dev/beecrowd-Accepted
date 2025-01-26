//beecrowd | 1097
//Sequence IJ 3

#include<stdio.h>
int main(){
    int i=1,j=7,k;
    do{
        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,j-=1);
        printf("I=%d J=%d\n",i,j-=1);
        i+=2;
        j+=4;
    }while(i<10);
    return 0;
}