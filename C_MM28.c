#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    while(scanf("%d",&a)!=EOF){
        for(int i=1;i*35<=a;i++)
            printf("%d ",i*35);
        printf("\n");
    }
}