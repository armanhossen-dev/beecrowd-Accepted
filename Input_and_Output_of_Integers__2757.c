//beecrowd | 2757 Input and Output of Integers
#include <stdio.h>

int main() {

    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

    //A = 1234, B = 12, C = 123
    printf("A = %d, B = %d, C = %d\n",A,B,C);
    
    int i,j,count=0,n[3],a[3],k,p[3];
    n[0] = A;
    a[0] = A;
    n[1] = B;
    a[1] = B;
    n[2] = C;
    a[2] = C;
    p[0]=a[0];
    p[1]=a[1];
    p[2]=a[2];

    //A =       1234, B =         12, C =        123
    for(i=0;i<=2;i++){
        do {
            n[i] = n[i] / 10;  // Remove the last digit in each iteration
            count++;
        } while (n[i] != 0);
    j=count;
    //printf("%d is %d digit\n",a[i],count);
    printf("%c = ",i+65);
    int x,y;
    if(a[i]>0){
        for(x=1;x<=10-j;x++){
        printf(" ");
    }
    }
    else{
        for(y=1;y<=9-j;y++){
        printf(" ");
    }
    }
    printf("%d",a[i]);
    if(i==0 || i ==1){
        printf(", ");
    }
    count=0;
    }
    printf("\n");


    //A = 0000001234, B = 0000000012, C = 0000000123    
    //printf("A = %.10d, B = %.10d, C = %.10d\n",A,B,C);//  negetive er jonno %.9d use kor te hobe so follow next 
    int l;
    for(l=0;l<=2;l++){
        if(a[l]>0){
            printf("%c = %.10d",l+65,a[l]);
        }
        else
            printf("%c = %.9d",l+65,a[l]);
        if(l!=2){
            printf(", ");
        }
    }
    printf("\n");
    
    //A = 1234      , B = 12        , C = 123 
    for(i=0;i<=2;i++){
        do {
            p[i] = p[i] / 10;  // Remove the last digit in each iteration
            count++;
        } while (p[i] != 0);
    j=count;
    printf("%c = ",i+65);
    printf("%d",a[i]);
    if(a[i]>0){
        for(k=1;k<=10-j;k++){
        printf(" ");
    }
    }
    else{
        for(k=1;k<=9-j;k++){
        printf(" ");
    }
    }
    
    if(i==0 || i ==1){
        printf(", ");
    }
    count=0;
    }
    printf("\n");

    return 0;
}