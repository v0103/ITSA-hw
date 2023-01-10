#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("NT10=%d\n",a/10);
    printf("NT5=%d\n",a%10/5);
    printf("NT1=%d\n",(a%10)%5);
}