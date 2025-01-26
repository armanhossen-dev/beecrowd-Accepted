//beecrowd | 1080 |Highest and Position
#include<stdio.h>
int main(){

    int i,a[100],high;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    high=a[0];
    }

    for(i=0;i<100;i++){
        if(a[i]>high){
            high=a[i];
        }
        else{
            high=high;
        }
    }
    printf("%d\n",high);
    for(i=0;i<100;i++){
        if(a[i]==high){
            printf("%d\n",i+=1);
        }
    }
    return 0;
}