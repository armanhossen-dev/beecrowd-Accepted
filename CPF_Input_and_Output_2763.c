#include <stdio.h>

int main() {

    int x,y,z,q;
    while(scanf("%d.%d.%d-%d",&x,&y,&z,&q) != EOF)
    {
        printf("%.3d\n%.3d\n%.3d\n%.2d\n",x,y,z,q);
    }

    return 0;
}