//https://judge.beecrowd.com/en/problems/view/1149
#include<stdio.h>
int main(){
    int A,N;
    scanf("%d",&A);
    while(1>0){
        scanf("%d",&N);
        if(N>0){
            break;
        }
    }
    //N=2;
    int sum = 0;
    for(int i=1;i<=N;i++){
        sum +=A;
        A++;
    }
    printf("%d\n",sum);
    return 0;
}