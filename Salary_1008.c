#include <stdio.h>
 
int main() {
 
    int num,sal;    
    float wh,SALARY;    
    scanf("%d%d%f",&num,&sal,&wh);
    SALARY = sal * wh ; 
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}