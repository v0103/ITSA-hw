#include <stdio.h>
#include <stdlib.h>

int main(){
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF){
        if(a<=60)
            printf("%.1lf\n",b*a);
        else if(a>60&&a<=120){
            printf("%.1lf\n",b*60+1.33*b*(a-60));
        }
        else if(a>120){
            printf("%.1lf\n",b*60+1.33*b*60+1.66*b*(a-120));
        }
    }
}