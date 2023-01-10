#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b;

    while(scanf("%lf %lf",&a,&b)!=EOF){
        printf("%.lf\n",(a+b)*(a+b));
    }
}