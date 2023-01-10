#include <stdio.h>
#include <stdlib.h>
int cal(int big,int small){
    return(big-(big/small)*small);
}
int main(){
    int a,b,sum=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        while(a!=0&&b!=0){
            if(a>b)
                a=cal(a,b);
            else if(a<b)
                b=cal(b,a);
        }
        if(a==0) printf("%d\n",b);
        else if(b==0) printf("%d\n",a);
    }
}
