//beecrowd | 1165 | Prime Number
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n[t],i,c[t];
    for(i=0;i<t;i++){
        scanf("%d",&n[i]);
        int j,a=0;
        for(j=1;j<=n[i];j++){
            if(n[i]%j==0){
                a++;
            }
        }
        if(a==2){
            c[i]=1;
        }
        else{
            c[i]=0;
        }
    }
    for(i=0;i<t;i++){
        printf("%d",n[i]);
        if(c[i]==1){
            printf(" eh primo\n");
        }
        else{
            printf(" nao eh primo\n");
        }
    }
    return 0;
}