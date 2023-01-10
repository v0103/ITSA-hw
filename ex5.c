#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int pOw(int a){
    int sum=1;
    for(int i=0;i<a;i++)
        sum*=2;
    return sum;
}
int main(){
    int a,cal;
    while(scanf("%d", &a)!=EOF){
        if(a<0)
            a+=256;
        for(int i=7;i>=0;i--){
            cal=pOw(i);
            if(a>=pOw(i)){
                printf("1");
                a-=pOw(i);
            }
            else
                printf("0");
        }
        printf("\n");
    }
   
}

