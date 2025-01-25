#include<stdio.h>
int main(){
    int i,num;
    scanf("%d",&num);
    for(i=1;i>0;i++){
        if(i==num){
            printf("%d\n",num);
            break;
        }
        if(num%i==0){
            printf("%d\n",i);
        }        
    }
    return 0;
}