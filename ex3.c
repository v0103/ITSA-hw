#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y,sum;
    while(scanf("%f %f",&x,&y)!=EOF)
        if((x*x+y*y)<=10000)
            printf("inside\n");
        else
            printf("outside\n");

}