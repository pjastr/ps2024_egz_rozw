#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculate(float (*fun)(float), float x){
    int n = (int)x;
    for(int i = 1; i <= n; i++){
        if(fabs(fun(i) - fun(-i)) > 0.0001){
            return 0;
        }
    }
    return 1;
}

float fun(float x){
    return x*x;
}

int main(){
    printf("%d\n", calculate(fun, 3.4));
    return 0;
}