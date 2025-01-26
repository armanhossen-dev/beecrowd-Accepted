//beecrowd | 1079
//Weighted Averages

#include <stdio.h>
int main() {
    int n,i;
    float a,b,c,o[1000],sum=0.00;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        o[i]=((a*2)+(b*3)+(c*5))/10;
    }
    for(i=0;i<n;i++){
        printf("%.1f\n",o[i]);
    }
    return 0;
}