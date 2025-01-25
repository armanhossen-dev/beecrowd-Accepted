/*
beecrowd | 1071
Sum of Consecutive Odd Numbers I
*/
#include<stdio.h>
int main(){
    int x,y,sum=0,i;
    scanf("%d %d",&x,&y);

    if((x>y) && (x%2==0)){
        x--;
        for(i=x;i>y;i-=2){
            sum += i;
        
        }
        //printf("sum1 = %d\n",sum);
    printf("%d\n",sum);
    }

    else if((x>y) && (x%2!=0)){
        x-=2;
        for(i=x;i>y;i-=2){
            sum += i;
        }
        //printf("sum2 = %d\n",sum);
        printf("%d\n",sum);
    }

    else if((x<y) && (x%2==0)){
        x++;
        for(i=x;i<y;i+=2){
            sum += i;
        }
        //printf("sum3 = %d\n",sum);
        printf("%d\n",sum);
    }

    else if((x<y) && (x%2!=0)){
        for(i=x;i<y;i+=2){
            sum += i;
        }
        //printf("sum4 = %d\n",sum);
        printf("%d\n",sum);
    }
    

    return 0;

}