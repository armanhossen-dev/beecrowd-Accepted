#include<stdio.h>

int main(){
    int time,speed,distance;
    float sp = 12.0,op;
    scanf("%d %d",&time, &speed);
    distance = time * speed;
    op = distance/sp;
    printf("%.3f\n",op);
    return 0;
}