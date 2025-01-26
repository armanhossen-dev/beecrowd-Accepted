//Salary with Bonus_1009
#include <stdio.h>
int main() {
    char u[30];
    double sal,sold,total;
    scanf("%s %lf %lf",&u,&sal,&sold);
    total = (sold*.15) + sal;
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}
