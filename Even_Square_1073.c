//beecrowd | 1073 | Even Square
#include <stdio.h>
int main() {

    int n,i;
    scanf("%d",&n);
    if((5<n) && (n<2000)){
        for(i=2;i<=n;i+=2){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}