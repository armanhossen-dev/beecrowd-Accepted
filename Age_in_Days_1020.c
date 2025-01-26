#include <stdio.h>

int main() {

    int n,y,m,d;
    scanf("%d",&n);
    float yf,mf,df;
    
    yf=(float)n/365;
    y=yf;
    printf("%d ano(s)\n",y);
    yf=yf-y;
    mf=yf*365;
    m=mf/30;
    printf("%d mes(es)\n",m);
    d=n-((y*365)+(m*30));
    printf("%d dia(s)\n",d);
    
    return 0;
}