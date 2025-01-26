#include<stdio.h>
int main(){
    double a,b,A=3.5,B=7.5,avg,div;
    div=(A+B); 
    scanf("%lf %lf",&a,&b);
    avg=((a*A)+(b*B))/div;
    printf("MEDIA = %.5lf\n",avg);

    return 0;
}