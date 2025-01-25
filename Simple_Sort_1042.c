//beecrowd | 1042 | Simple Sort
#include<stdio.h>
int main(){ 
    int in[3],i,op2[3];
    for(i=0;i<3;i++){
        scanf("%d",&in[i]);
        op2[i]=in[i];
    }
    int t,j,temp;
    for(t=1;t<=3;t++){
        for(i=0,j=1;i<3,j<3;i++,j++){
            if(in[i]>in[j]){
                temp=in[i];
                in[i]=in[j];
                in[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d\n",in[i]);
    }
    printf("\n");
    for(i=0;i<3;i++){
        printf("%d\n",op2[i]);
    }
    return 0;
}