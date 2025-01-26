#include <stdio.h>

int main() {

    int pn1,pn2,u1,u2;  //pn1 = product number, u1 = unit number,p1 = price
    float p1,p2,pay;
    
    scanf("%d%d%f",&pn1,&u1,&p1);
    scanf("\n%d%d%f",&pn2,&u2,&p2);
    
    pay = (u1*p1) + (u2*p2);

    printf("VALOR A PAGAR: R$ %.2f\n",pay);
    return 0;
}