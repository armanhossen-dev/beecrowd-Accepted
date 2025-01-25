//beecrowd | 1164 | Perfect Number
#include<stdio.h>
int main(){
    int t,n,i,j,k;
    scanf("%d",&t);
    int in[t],os[t];
    for(k=1,i=0;k<=t;k++,i++){
        scanf("%d",&in[i]);
        int sum=0;
        for(j=1;j<in[i];j++){
            if(in[i]%j==0){
                sum+=j;
            }
        }
        if(sum==in[i]){
            os[i]=1;
        }
        else{
            os[i]=0;
        }
    }
    for(i=0;i<t;i++){
        printf("%d",in[i]);
        if(os[i]==1){
            printf(" eh perfeito\n");
        }
        if(os[i]==0){
            printf(" nao eh perfeito\n");
        }
    }
    return 0;
}