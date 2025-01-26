#include<stdio.h>
#include<string.h>
int main(){

    char a1[30],a2[30],a3[30],a4[30], a5[30],a6[30],a7[30],a8[30],a9[30],a10[30],a11[30];
    char b1[30],b2[30],b3[30],b4[30], b5[30],b6[30],b7[30],b8[30],b9[30],b10[30],b11[30];

    scanf("%s %s %s",&a1,&a2,&a3);
    if(strcmp(a1,"vertebrado")==0){
        if(strcmp(a2,"ave")==0){
            if(strcmp(a3,"carnivoro")==0){
                printf("aguia\n");
            }
            if(strcmp(a3,"onivoro")==0){
                printf("pomba\n");
            }
        }
        if(strcmp(a2,"mamifero")==0){
            if(strcmp(a3,"onivoro")==0){
                printf("homem\n");
            }
            if(strcmp(a3,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp(a1,"invertebrado")==0){
        if(strcmp(a2,"inseto")==0){
            if(strcmp(a3,"hematofago")==0){
                printf("pulga\n");
            }
            if(strcmp(a3,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        if(strcmp(a2,"anelideo")==0){
            if(strcmp(a3,"hematofago")==0){
                printf("sanguessuga\n");
            }
            if(strcmp(a3,"onivoro")==0){
                printf("minhoca\n");
            }
        }
    }

    
    return 0;
}
