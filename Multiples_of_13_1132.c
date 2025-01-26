//beecrowd | 1132 | Multiples of 13

#include<stdio.h>
int main(){

    int x,y,sum=0,i;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        for(i=x;i<=y;i++){
        if(i%13!=0){
            sum=sum+i;
            //sum+=i;
        }
        }
        printf("%d\n",sum);
    }
    if(x>y)
    {
        for(i=x;i>=y;i--){
        if(i%13!=0){
            sum=sum+i;
            //sum+=i;
        }
        }
        printf("%d\n",sum);

    }
    
    return 0;
}