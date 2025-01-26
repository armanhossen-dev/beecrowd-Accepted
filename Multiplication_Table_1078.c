//beecrowd | 1078 | Multiplication Table

#include<stdio.h>
int main(){

    int n,i;
    scanf("%d",&n);
    if(2<n && n<1000){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",i,n,i*n);
        }
    }
    return 0;
}