//beecrowd | 1115 | Quadrant
#include<stdio.h>
int main(){
    int x,y,i;
    for(i=1;i>0;i++){
        scanf("%d %d",&x,&y);
        if(x==0 || y==0){
            break;
        }
        if(x>0 && y>0){
            printf("primeiro\n");
        }
        if(x>0 && y<0){
            printf("quarto\n");
        }
        if(x<0 && y<0){
            printf("terceiro\n");
        }
        if(x<0 && y>0){
            printf("segundo\n");
        }
    }
    return 0;
}