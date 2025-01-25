#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    if(n>0){
    if(n%2==0){
        n=n+1;
    }
    else{
        n=n;
    }
        printf("%d\n",n);
        for(i=1;i<6;i++){
            n+=2;
            if(n>31){
                break;
            }
            printf("%d\n",n);
        }
    }
    return 0;
}