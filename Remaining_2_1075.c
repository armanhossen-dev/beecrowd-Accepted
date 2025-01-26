//beecrowd | 1075 | Remaining 2
#include<stdio.h>
int main(){
    
    //if n = 13
    //n*number+2= all numbers between 1 and 10000, which divided by N will give the rest = 2.
    int i=0,n,p=0;
    scanf("%d",&n);
    if(n<10000){
        do{
        p=(n*i)+2;
        if(p<=10000){
            printf("%d\n",p);
		}
        i++;  
        }while(p<=10000);
    }
    return 0;
}