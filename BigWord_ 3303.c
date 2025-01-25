//https://judge.beecrowd.com/en/problems/view/3303
#include<stdio.h>
int main(){
    
    char take[20];
    
        gets(take);
    //printf("%s\n",take);

    int i=0;    
    while(take[i] != '\0'){
        i++;
    }
    //printf("%d\n",i);
    if( i >= 10 && i<=20){
        printf("palavrao\n");
    }
    if(i<10 && i>0 ){
        printf("palavrinha\n");
    }
    
    return 0;
}