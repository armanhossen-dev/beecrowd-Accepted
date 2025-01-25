#include<stdio.h>
#include<math.h>

int main(){
    //floor and ceil
    int n;
    scanf("%d",&n);
    if(2 <= n && n <= 100){  
        if(n%2==0){
            int i = n*n;
            i = i/2;
            printf("%d casas brancas e %d casas pretas\n",i,i);
        }
        else{
            float fr;
            fr = (float)(n*n)/2;
            double a,b;
            a = floor(fr);
            b = ceil(fr);
            int ain, bin;
            ain = a;
            bin = b;
            printf("%d casas brancas e %d casas pretas\n",bin,ain);

        }
    }

    return 0;
}

/*
floor and ceil in c
Understanding ceil() and floor() Functions in C

The ceil() and floor() functions in C are part of the <cmath> library and are used to 
map real numbers to the nearest integer values. These functions are useful for rounding 
floating-point numbers to the nearest integer.

ceil() Function: The ceil() function returns the smallest integer that is greater than 
or equal to the given floating-point number. If the number is already an integer,
 ceil() returns the same value.

floor() Function: The floor() function returns the largest integer that is smaller 
than or equal to the given floating-point number. It effectively rounds down the 
number to the nearest integer.

*/