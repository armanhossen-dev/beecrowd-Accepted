//beecrowd | 1006 | Average 2
#include <stdio.h>

int main() {    
    double a,b,c,ans,A=2.0,B=3.0,C=5.0;
    scanf("%lf %lf %lf",&a,&b,&c);

    A=(a*A)/10.0;
    //printf("A=%lf\n",A);
    B=(b*B)/10.0;
    //printf("B=%lf\n",B);
    C=(c*C)/10.0;
    //printf("C=%lf\n",C);

    ans= A+B+C;
    printf("MEDIA = %.1lf\n",ans);
    return 0;
}