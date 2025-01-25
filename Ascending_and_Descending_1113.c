/*
beecrowd | 1113
Ascending and Descending
*/
#include<stdio.h>
int main(){
    int i,x,y,ar[10000],c=0;
    for(i=0;i>-1;i++){
        scanf("%d %d",&x, &y);
        if(x==y){
            break;
        }
        else{
            if(x>y){
                ar[i]=1;
                c++;
            }
            if(x<y){
                ar[i]=0;
                c++;
            }
        }
    }
    for(i=0;i<c;i++){
        if(ar[i]==1){
            printf("Decrescente\n");
        }
        if(ar[i]==0){
            printf("Crescente\n");
        }
    }
    return 0;
}