#include <stdio.h>
#include<math.h>

int main() {

    float x1,x2,y1,y2,D;
    scanf("%f%f",&x1,&y1);
    scanf("\n%f%f",&x2,&y2);
    D=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("%.4f\n",D);
    
    return 0;
}