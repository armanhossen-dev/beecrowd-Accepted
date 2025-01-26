#include<stdio.h>

int main(){
    int time,speed,distance;
    float sp = 12.0,op;
    scanf("%d %d",&time, &speed);
    distance = time * speed;
    op = distance/sp;
    printf("%.3f\n",op);
    return 0;
}

/*
#include<stdio.h>
int main(){

    int t,s,d;              // t = time, s=speed, d= distance
    float f=12.0,ans;
    scanf("%d %d",&t,&s);
    d=t*s;
    ans=d/f;
    printf("%.3f\n",ans);
    return 0;
}

    f = 12 Km/L.

    Input
    The input file contains two integers.
     The first one is the spent time in
     the trip (in hours). The second one
     is the average speed during the trip (in Km/h).

    Output
    Print how many liters would be needed to do this trip
    , with three digits after the decimal point.

*/