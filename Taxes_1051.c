#include<stdio.h>
int main(){

    float n,m2k=.08,m3k=.18,m4h=.28;
    float n1,n2,n3,n4,op=0.00;

    scanf("%f",&n);
    
    if(0<=n && n<=2000.00){
        printf("Isento\n");
    }
    if(2000.01<=n && n<=3000.00){
        n1=(n-2000.00);
        op=(n1*m2k);
        printf("R$ %.2f\n",op);
    }
    if(3000.01<=n && n<=4500.00){
        n1=(n-2000.00);
        n2=(n1-1000.00);
        op=(1000.00*m2k);
        op=op+(n2*m3k);
        printf("R$ %.2f\n",op);
    }
    if(4500.00<n){
        n1=(n-2000.00);
        n2=(n1-1000.00);
        op=(1000.00*m2k);
        n3=(n2-1500.00);
        op=op+(1500.00*m3k);
        op=(op+n3*m4h);
        printf("R$ %.2f\n",op);
    }
    return 0;
}