#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,sum;

    while(scanf("%f %f %f",&a,&b,&c)!=EOF){
        printf("Trapezoid area:%.1f\n",(a+b)*c/2);
    }

        
}