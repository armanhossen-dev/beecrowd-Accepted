//beecrowd | 1037 | Interval 
#include<stdio.h>
int main(){
    float nf;
    scanf("%f",&nf);
    
    //[0,25] (25,50], (50,75], (75,100]

    if((0 <= nf ) && (nf <=25)){
        printf("Intervalo [0,25]\n");
    }

    else if(( 25 < nf ) && ( nf <= 50 )){
        printf("Intervalo (25,50]\n");
    }

    else if(( 50 < nf ) && ( nf <= 75 )){
        printf("Intervalo (50,75]\n");
    }

    else if(( 75 < nf ) && ( nf <= 100 )){
        printf("Intervalo (75,100]\n");
    }

    else{
        printf("Fora de intervalo\n");
    }

    return 0;

}