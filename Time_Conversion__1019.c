#include<stdio.h>

int main(){

    int time,m1,h1;
    float h,m,s;
    
    scanf("%d",&time);      
    
    h=(float)time/3600;
    h1=h;

    m=h-h1;
    s=(m*60);
    m1=s;

    s=s-m1;
    s=(s*60);
    

    printf("%d:%d:%.0f\n",h1,m1,s);
    
    return 0;
    
}