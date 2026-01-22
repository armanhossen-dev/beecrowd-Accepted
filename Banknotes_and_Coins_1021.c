// https://judge.beecrowd.com/en/problems/view/1021
#include<stdio.h>
#include<math.h>
int main(){
        
    double cry;
    int d100, d50, d20, d10, d5, d2, d1, d_50, d_25, d_10, d_05, d_01;
    scanf("%lf", &cry); //576.73

    /*
    576.73
    nota(s) de R$ 50.00
    1 nota(s) de R$ 20.00
    0 nota(s) de R$ 10.00
    1 nota(s) de R$ 5.00
    0 nota(s) de R$ 2.00

    1 moeda(s) de R$ 1.00
    1 moeda(s) de R$ 0.50
    0 moeda(s) de R$ 0.25
    2 moeda(s) de R$ 0.10
    0 moeda(s) de R$ 0.05
    3 moeda(s) de R$ 0.01
    */
    
    printf("NOTAS:\n");

    d100 = cry/100;  //d100 = 5
    cry = cry - (d100*100.00); // cry = 76.76
    printf("%d nota(s) de R$ 100.00\n", d100);

    d50 = cry/50.00;
    cry = cry - (d50*50.00); 
    printf("%d nota(s) de R$ 50.00\n", d50);

    d20 = cry/20.00;
    cry = cry - (d20*20.00); 
    printf("%d nota(s) de R$ 20.00\n", d20);

    d10 = cry/10.00;
    cry = cry - (d10*10.00); 
    printf("%d nota(s) de R$ 10.00\n", d10);

    d5 = cry/5.00;
    cry = cry - (d5*5.00); 
    printf("%d nota(s) de R$ 5.00\n", d5);

    d2 = cry/2.00;
    cry = cry - (d2*2.00); 
    printf("%d nota(s) de R$ 2.00\n", d2);

    printf("MOEDAS:\n");
    //d_50, d_25, d_10, d_05, d_01;

    d1 = cry/1.00;
    cry = cry - (d1*1.00); 
    printf("%d moeda(s) de R$ 1.00\n", d1);

    d_50 = cry/0.50;
    cry = cry - (d_50*0.50); 
    printf("%d moeda(s) de R$ 0.50\n", d_50);

    d_25 = cry/0.25;
    cry = cry - (d_25*0.25); 
    printf("%d moeda(s) de R$ 0.25\n", d_25);

    d_10 = cry/0.10;
    cry = cry - (d_10*0.10); 
    printf("%d moeda(s) de R$ 0.10\n", d_10);

    d_05 = cry/0.05;
    cry = cry - (d_05*0.05);
    printf("%d moeda(s) de R$ 0.05\n", d_05);

    d_01 = cry/0.01;
    cry = cry - (d_01*0.01); 
    printf("%d moeda(s) de R$ 0.01\n", d_01);

    return 0;
}