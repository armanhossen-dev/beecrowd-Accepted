//beecrowd | 1134 | Type of Fuel

#include<stdio.h>
int main(){
    int x[10000],al=0,ga=0,di=0,i=0;
    do{
        scanf("%d",&x[i]);
        if(x[i]==1){
            al++;
        }
        if(x[i]==2){
            ga++;
        }
        if(x[i]==3){
            di++;
        }
    }while(x[i]!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al );
    printf("Gasolina: %d\n", ga);
    printf("Diesel: %d\n", di);

    return 0;
}