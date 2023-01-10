#include <stdio.h>
#include <stdlib.h>
int rec(int n){
    if(n==0||n==1) return(n+=1);
    if(n>1) return(rec(n-1)+rec(n/2));
}

int main(){
    int a,b,c=0;
    while(scanf("%d",&a)!=EOF){
        a=rec(a);
        printf("%d\n",a);
    }
}
