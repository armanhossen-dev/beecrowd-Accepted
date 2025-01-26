#include<stdio.h>
int main(){
    int n,h,p;
    scanf("%d",&n);
    
    printf("%d\n",n);  
    
    printf("%d nota(s) de R$ 100,00\n", n/100);     
    
    h=(n%100);   
    printf("%d nota(s) de R$ 50,00\n", h/50);     

    h=(h%50);
    printf("%d nota(s) de R$ 20,00\n", h/20);
    
    h=(h%20);
    printf("%d nota(s) de R$ 10,00\n", h/10);
    
    h=(h%10);
    printf("%d nota(s) de R$ 5,00\n", h/5);
    
    h=(h%5);
    printf("%d nota(s) de R$ 2,00\n", h/2);
    h=(h%2);
    
    printf("%d nota(s) de R$ 1,00\n", h/1);
    return 0;
}

