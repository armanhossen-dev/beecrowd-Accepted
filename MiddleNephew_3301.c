//https://judge.beecrowd.com/en/problems/view/3301
#include<stdio.h>
int main(){
    int h,z,l;
    scanf("%d %d %d",&h,&z,&l);
    int ar[3]={h,z,l};
    /*printf("%d\n", ar[0]);     printf("%d\n", ar[1]);     printf("%d\n", ar[2]);*/ 
    int tem, i,f,j,n;
    n=3;
    //tem = ar[0];
    for (f = 1; f <= 3; f++)
    {
        for (i = 0, j = 1; i < n, j < n; i++, j++) // joto bar ei loop colse toto bar piser soto number sam ne asi se
        {
            if (ar[i] > ar[j])
            {
                tem = ar[i];
                ar[i] = ar[j];
                ar[j] = tem;
            }
        }
    }
   /*
    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    
   */



    if(ar[1]==z){
        printf("zezinho\n");
    }
    else if(ar[1]==h){
        printf("huguinho\n");
    }
    else if(ar[1]==l){
        printf("luisinho\n");
    }

    return 0;
}