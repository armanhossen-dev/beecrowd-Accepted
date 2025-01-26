#include <stdio.h>
int main() {
    int i,count=0;
    float num[6];
    for(i=0;i<=5;i++){
        scanf("%f",&num[i]);
        if(num[i]>0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}