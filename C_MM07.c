#include <stdio.h>
#include <stdlib.h>

int main(){
    double a;

    while(scanf("%lf",&a)!=EOF){
        printf("%.lf ",a);
        printf("%.lf ",a*a);
        printf("%.lf\n",a*a*a);
    }
}