//beecrowd | 1133 | Rest of a Division
#include<stdio.h>
int main(){
    int x,y,i;
    scanf("%d %d",&x,&y);
    
    if(x>0&&y>0){ //The input file contains 2 any positive integers, not necessarily in ascending order.

    if(x<y){
        for(i=x+1;i<y;i++){ // i=x+1 because: i have to work with the numbers which are between x,y ,not them include
            if(((i%5==2) || (i%5==3))&&(i>0)){
                printf("%d\n",i);
            }
        }
    }
    if(y<x){
        for(i=y+1;i<x;i++){   // i=y+1 because: i have to work with the numbers which are between x,y ,not them include
            if(((i%5==2) || (i%5==3))&&(i>0)){
                printf("%d\n",i);
            }
        }
    }
    }
    return 0;
}
