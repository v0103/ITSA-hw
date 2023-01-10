#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1lf\n",a*a+0.05);
    }
}