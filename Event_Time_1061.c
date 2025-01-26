#include <stdio.h>
int main(){
 int h, hh, hr,m,mm,d,dm,s,ss;

 scanf("Dia %d",&d);
 scanf("%d : %d : %d\n",&h,&m,&s);
 scanf("Dia %d",&dm);
 scanf("%d : %d : %d",&hh,&mm,&ss);

s = ss - s;
m = mm - m;
h = hh - h;
d = dm - d;

if(s<0){
	s+=60;
	m--;
}

if(m<0){
	m+=60;
	h--;
}

if(h<0){
	h+=24;
	d--;
}

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


 return 0;
}

/*
#include<stdio.h>
int main(){
    int h1,h2,d1,d2,m1,m2,s1,s2;
    scanf("Dia %d",&d1);;
    scanf("%d : %d : %d\n",&h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    
    d1=d2-d1;
    h1=h2-h1;
    m1=m2-m1;
    s1=s2-s1;
    
    if(s1<0){
        s1=s1+60;
        m1=m1-1;
    }
    if(m1<0){
        m1+=60;
        h1--;
    }
    if(h1<0){
        h1+=24;
        d1--;
    }
    
    printf("%d dia(s)\n",d1);
    printf("%d hora(s)\n",h1);
    printf("%d minuto(s)\n",m1);
    printf("%d segundo(s)\n",s1);
    return 0;
}
*/