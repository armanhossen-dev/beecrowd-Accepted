//! beecrowd | 1116
//todo: Dividing X by Y

#include<stdio.h>
int main(){
    float op[100000];
    int i,n,x[100000],y[100000];

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
        op[i]=(float)x[i]/y[i];
    }

    for(i=0;i<n;i++){
        if(y[i]==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",op[i]);
        }
    }
    return 0;
}