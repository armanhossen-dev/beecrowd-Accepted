#include <stdio.h>
 
int main() {
 
    double  A,B,C,rt,cir,trap,squ,rect;
    
    
    scanf("%lf %lf %lf",&A,&B,&C);
    
    
    rt = .5 * A * C ;
    //Area of a Triangle = A = ½ (b × h) square units
    
    cir = 3.14159 * C * C;
    //Area of Circle = π × r2,
    
    trap = .5 * C * (A + B);
    //Area of the Trapezium = (1/2)h(a+b)
    
    squ = B * B;
    //The area of a square is equal to (side) × (side) square units
    
    rect = A * B;
    // area of the rectangle = length × width
    
    printf("TRIANGULO: %.3lf\n",rt);
    printf("CIRCULO: %.3lf\n",cir);
    printf("TRAPEZIO: %.3lf\n",trap);
    printf("QUADRADO: %.3lf\n",squ);
    printf("RETANGULO: %.3lf\n",rect);
 
    return 0;
}