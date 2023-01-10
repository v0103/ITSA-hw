#include <stdio.h>
#include <stdlib.h>

int main(){
    int y,kk=0;
    while(scanf("%d",&y)!=EOF){
        if(y%4==0&&y%100!=0){
            kk=1;
        }
        else if(y%400==0)
            kk=1;
        if(kk)
            printf("Bissextile Year\n");
        else
            printf("Common Year\n");
        kk=0;
    }
}