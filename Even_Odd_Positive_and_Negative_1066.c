#include <stdio.h>
int main() {
    int n[5],i,even=0,odd=0,pos=0,neg=0;
    for(i=0;i<5;i++){
        scanf("%d",&n[i]);
        if(n[i]%2==0 || n[i]==0){
            even++;
        }
        if(n[i]%2!=0){
            odd++;
        }
        if(n[i]>0){
            pos++;
        }
        if(n[i]<0){
            neg++;
        }
    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);

    return 0;
}