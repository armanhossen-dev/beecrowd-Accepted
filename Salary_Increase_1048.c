#include<stdio.h>
int main(){

    float n,t,add;
    int p15=15,p12=12,p10=10,p7=7,p4=4;
    scanf("%f",&n);

    if(0<=n && n<=400.00){
        add=(n*.15);
        t=(n+add);
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",add);
        printf("Em percentual: %d %%\n", p15);        
    }
    if(400.01<=n && n<=800.00){
        add=(n*.12);
        t=(n+add);
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",add);
        printf("Em percentual: %d %%\n", p12);        
    }
    if(800.01<=n && n<=1200.00){
        add=(n*.10);
        t=(n+add);
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",add);
        printf("Em percentual: %d %%\n", p10);        
    }
    if(1200.01<=n && n<=2000.00){
        add=(n*.07);
        t=(n+add);
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",add);
        printf("Em percentual: %d %%\n", p7);        
    }
    if(2000.00<n){
        add=(n*.04);
        t=(n+add);
        printf("Novo salario: %.2f\n",t);
        printf("Reajuste ganho: %.2f\n",add);
        printf("Em percentual: %d %%\n", p4);        
    }
    
    return 0;
}