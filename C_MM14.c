#include <stdio.h>
#include <stdlib.h>
#define day (60*60*24)
#define hour (60*60)
#define minutes 60
int main(){
    int a;
    scanf("%d",&a);
    printf("%d days\n",a/day);
    printf("%d hours\n",a%day/hour);
    printf("%d minutes\n",(a%day)%hour/minutes);
    printf("%d seconds\n",(a%day)%hour%minutes);
}