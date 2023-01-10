#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,a,b,c;
    scanf("%d,%d,%d,%d",&n,&a,&b,&c);
    n=n-a*15-b*20-c*30;
    if(n<0) printf("0\n");
    else
        printf("%d,%d,%d\n",(n%50)%5,(n%50)/5,n/50);
}
