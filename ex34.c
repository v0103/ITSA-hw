#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,ans;
    while(scanf("%f %f",&a,&b)!=EOF){
        if(b==1)
            printf("%.1f\n",(a-80)*0.7);
        else
            printf("%.1f\n",(a-70)*0.6);
    }
}