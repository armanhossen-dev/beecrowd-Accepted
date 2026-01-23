// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    double a,b, num;
    vector<double> v;
    
    while(1){
        cin >> num ;
        if(num == 2){
            break;
        }
        v.push_back(num);
    }

    int i = 0;
    double sum = 0;
    bool stop = false;

    for(double num : v){
        if(num < 0 || num > 10){
           printf("nota invalida\n");           
        }
        if(num>=0 && num<=10 && stop == true && num != 1){
            printf("novo calculo (1-sim 2-nao)\n");
        }
        if(num == 1){
                stop = false;
                continue;
        }           
        if(num>=0 && num<=10 && stop == false){           
            if(i == 0 || i == 1){
                sum += num;
                i++;
            }
            if(i == 2 && stop == false){
                printf("media = %.2lf\n", sum/2.0);
                printf("novo calculo (1-sim 2-nao)\n");
                stop = true;
                sum = 0;
                i = 0;
            } 
        }     
    }
    return 0;
}