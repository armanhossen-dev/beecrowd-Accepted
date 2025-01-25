//Sum of Consecutive Odd Numbers II 
//beecrowd | 1099

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int o[n];

    int i,sum,x,y,j,k;
    for(i=0;i<n;i++){
        sum=0;
        scanf("%d %d",&x,&y);
        if(x==y){
            o[i]=0;
        }
        if(x<y  && x%2==0){
            x++;
            for(j=x;j<y;j+=2){
                sum+=j;
            }
            o[i]=sum;
        }
        else if(x<y  && x%2!=0){
            for(j=x+2;j<y;j+=2){
                sum+=j;
            }
            o[i]=sum; 
        }
        else if(x>y && y%2==0){
            y++;
            for(j=y;j<x;j+=2){
                sum+=j;
            }
            o[i]=sum;
        } 
        else if(x>y  && y%2!=0){
            for(j=y+2;j<x;j+=2){
                sum+=j;
            }
            o[i]=sum; 
        }
    }

    for(i=0;i<n;i++){
        printf("%d\n",o[i]);
    }

    return 0;
}