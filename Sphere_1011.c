#include <stdio.h>

int main() {

    double R,vol,pi = 3.14159;
    scanf("%lf",&R);
    
    vol = ((float)4/3)*pi*R*R*R;
    
    printf("VOLUME = %.3lf\n",vol);

    return 0;
}