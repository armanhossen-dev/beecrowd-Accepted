#include<stdio.h>
int main(){
    
    char x[100000];
    int i,n,a[100000],sum[4];
    float f[4],cp,rp,sp;
    
    sum[0]=0;
    sum[1]=0;
    sum[2]=0;
    sum[3]=0;
    
    scanf("%d",&n);
    
        for(i=0;i<n;i++){
            scanf("%d %c",&a[i],&x[i]);
        }

        for(i=0;i<n;i++)
        {
            if(1<=a[i] && a[i]<=15)
            {  //1 ≤ Amount ≤ 15
                sum[0]=sum[0]+a[i];

            if(x[i]==67){     
                sum[1]=sum[1]+a[i];
            }
            f[1]=sum[1];


            if(x[i]==82){   
                sum[2]=sum[2]+a[i];
            }
            f[2]=sum[2];


            if(x[i]==83){   
                sum[3]=sum[3]+a[i];
            }
            f[3]=sum[3];
        
            }
        }
        printf("Total: %d cobaias\n",sum[0]);
        printf("Total de coelhos: %d\n",sum[1]);
        printf("Total de ratos: %d\n",sum[2]);
        printf("Total de sapos: %d\n",sum[3]);

        f[0]=sum[0];
        cp=(f[1]/f[0])*100;
        rp=(f[2]/f[0])*100;
        sp=(f[3]/f[0])*100;

        printf("Percentual de coelhos: %.2f %%\n",cp);
        printf("Percentual de ratos: %.2f %%\n",rp);
        printf("Percentual de sapos: %.2f %%\n",sp);

    
    return 0;
}



//ascii valu use kore si, x[i] eta integer value tia double equal diya er sate integer (decimal) value er comparison kora jai tai C,S,R er ascii valu use  kore si
//Dec  Char
//67  C
//82  R
//83  S
