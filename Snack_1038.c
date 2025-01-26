#include <stdio.h>
 
int main() {
 
    int X,Y;
    float t=0;
    scanf("%d%d",&X,&Y);
    if(X==1){
        t = (Y*4.00);
    }
    else if(X==2){
        t = (Y*4.50);
    }
    else if(X==3){
        t = (Y*5.00);
    }
    else if(X==4){
        t = (Y*2.00);
    }
    else{
        t = (Y*1.50);
    }
    
    printf("Total: R$ %.2f\n",t);
    
 
    return 0;
}