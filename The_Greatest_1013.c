//beecrowd | 1013 | The Greatest
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int max,maxfinal;
    max = (a+b+abs(a-b))/2;
    maxfinal=(max+c+abs(max-c))/2;
    
    printf("%d eh o maior\n",maxfinal);

    return 0;
}