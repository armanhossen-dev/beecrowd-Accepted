//Game Time
#include<stdio.h>
int main(){
    int s,e,dura;
    scanf("%d %d",&s,&e);
    dura=(24-s)+e;
    if(dura>24){
        dura=dura-24;
    }
    printf("O JOGO DUROU %d HORA(S)\n",dura);
    return 0;
}