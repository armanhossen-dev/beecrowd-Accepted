#include<stdio.h>
int main(){
    int DD,MM,YY;
    
    scanf("%d/%d/%d",&DD,&MM,&YY);
    
        printf("%.2d/%.2d/%.2d\n",MM,DD,YY);
        printf("%.2d/%.2d/%.2d\n",YY,MM,DD);
        printf("%.2d-%.2d-%.2d\n",DD,MM,YY);
  
    
    return 0;
}