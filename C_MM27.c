#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<b){
            int c=a;
            a=b;
            b=c;
        }
        printf("%d\n",(a+b)*(a-b+1)/2);
    }
}