//beecrowd | 1035 
#include<stdio.h>
int main(){
    
    int A,B,C,D,sum,g,v,p;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    if(B>C && D>A)
    {
        if((C+D)>(A+B))
        {
            if(C>0 && D>0)
            {
                if(A%2==0)
                {
                    printf("Valores aceitos\n");
                }
                else{
                    printf("Valores nao aceitos\n");
                }
            }
            else{
            printf("Valores nao aceitos\n");
    }
        }
        else{
            printf("Valores nao aceitos\n");
    }
    }
    else{
            printf("Valores nao aceitos\n");
    }
}