//beecrowd | 1043 | Triangle

#include <stdio.h>
int main() {

    float a,b,c,trap,p;
    /*Read three point floating values (A, B and C) and verify 
    if is possible to make a triangle with them. If it is possible, 
    calculate the perimeter of the triangle and print the message
    Perimetro = XX.X
    */
    scanf("%f %f %f",&a,&b,&c);
    // when sum of the two shortest sides is greater then the third side then they can form a triangle
    
    if((a+b)>c&&(b+c)>a&&(a+c)>b){
        p=a+b+c;
        printf("Perimetro = %.1f\n",p);
    }
    else{
        trap = .5 * c * (a + b);
        printf("Area = %.1f\n",trap);
    }
    //formula of area of trapezium = (1/2) h (a+b)
    /*calculate the area of the trapezium which basis A and B and C as height, 
    and print the message: Area = XX.X */

    return 0;
}