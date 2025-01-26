#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((0<a)&&(0<b)&&(0<c)){
        
        //if A ≥ B + C, write the message: NAO FORMA TRIANGULO         //*😶⏬⏬⏬⏬⏬Niche niche poro⏬⏬⏬⏬
        if((a)>=(b+c)||(b)>=(a+c)||(c)>=(b+a)){                        //! ei line e "if" er por 
            printf("NAO FORMA TRIANGULO\n");                           //! teke "else if" use
        }                                                              //!
        //if A2 = B2 + C2, write the message: TRIANGULO RETANGULO      //! kor si koaron ei 4 ta if er condition 
        else if(a*a==(b*b + c*c)||b*b==(a*a + c*c)||c*c==(b*b + a*a)){ //! 
            printf("TRIANGULO RETANGULO\n");                           //! gular jekono ak ta true hole
        }                                                              //!
        //if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO    //! pore gula false hobe,
        else if(a*a>(b*b + c*c)||b*b>(a*a + c*c)||c*c>(b*b + a*a)){    //!
            printf("TRIANGULO OBTUSANGULO\n");                         //! tai ei 4 ta condition er
        }                                                              //!
        //if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO     //! protom ta te 'if',
        else if(a*a<(b*b + c*c)||b*b<(a*a + c*c)||c*c<(b*b + a*a)){    //!
            printf("TRIANGULO ACUTANGULO\n");                          //! porer gula te 'else if'  use kor si
        }                                                              //? bujoni ei bepr ta.............


        //f the three sides are the same size, write the message: TRIANGULO EQUILATERO
        if((a==b)&&(a==c)){
            printf("TRIANGULO EQUILATERO\n");
        }
        //if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES
        if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((c==b)&&(c!=a))){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}