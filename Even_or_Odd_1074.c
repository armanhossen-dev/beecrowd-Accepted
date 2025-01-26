//beecrowd | 1074 |Even or Odd

#include<stdio.h>
int main(){

    int n,a[10000],i;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0 && a[i]!=0){
            printf("EVEN ");
            if(a[i]<0){
                printf("NEGATIVE\n");
            }
            if(a[i]>0){
                printf("POSITIVE\n");
            }
        }
        if(a[i]%2!=0){
            printf("ODD ");
            if(a[i]<0){
                printf("NEGATIVE\n");
            }
            if(a[i]>0){
                printf("POSITIVE\n");
            }
        }
        if(a[i]==0){
            printf("NULL\n");
        }
        
    }
    return 0;
}

/*
        if(a[i]<0){
            printf("ODD NEGATIVE\n");
        }
        if(a[i]>0){
            printf("EVEN NEGATIVE\n");
        }
        
*/