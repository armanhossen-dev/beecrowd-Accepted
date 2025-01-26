#include <stdio.h>
int main() {
    int n,i,c=0,num[1000];

    scanf("%d",&n);
    if((1<=n)&&(n<=1000)){
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
            if(num[i]==1){
                c++;
            }
        }
        
    }
    printf("%d\n",c);
    return 0;
}