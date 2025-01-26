#include <stdio.h>
 
int main() {
 
    int X;
    float Y,mes;
    
    scanf("%d %f",&X,&Y);
    
    mes = X/Y;
    
    printf("%.3f km/l\n",mes);
    
    return 0;
}