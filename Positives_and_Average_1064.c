#include <stdio.h>

int main() {
    float a[6],sum=0;
    int i,P_count = 0;

    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
        if(a[i]>0){
            P_count++;
            sum=sum+a[i];
        }
    }
    printf("%d valores positivos\n",P_count);
    printf("%.1f\n",sum/P_count);

    return 0;
}