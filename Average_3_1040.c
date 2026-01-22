//https://judge.beecrowd.com/en/problems/view/1040
#include<stdio.h>
int main(){ 
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    double avg = ((a*2) + (b*3) + (c*4) + (d*1))/10;
    printf("Media: %.1lf\n", avg);
    
    if(avg> 7.0){
        printf("Aluno aprovado.\n");
    }

    if(avg < 5.0){
        printf("Aluno reprovado.\n");
    }

    if(avg >= 5.0 && avg <= 6.9){
        printf("Aluno em exame.\n");
        
        double ex;
        scanf("%lf",&ex);
        printf("Nota do exame: %.1lf\n", ex);
        double new = (avg + ex)/2;
        
        if(new >= 5.0){
            printf("Aluno aprovado.\n");
        }
        if(new <= 4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",new);
    }
    return 0;
}