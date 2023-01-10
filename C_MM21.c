#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b=1;
    while(scanf("%lf",&a)!=EOF){
        while(a>0){
            b*=a--;
        }
        printf("%.lf\n",b);
    }
}