#include<stdio.h>
int main(){
    int n,x[10000],i,in=0,out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]<=20&&10<=x[i]){
            in++;
        }
        else{
            out++;
        }
    }
        printf("%d in\n",in);
        printf("%d out\n",out);
    return 0;
}