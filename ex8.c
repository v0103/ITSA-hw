#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,k=1;
    while(scanf("%d",&num)!=EOF){
        for(int i=2;i<(num/2);i++){
            if(num%i==0){
                printf("NO\n");
                k=0;
                break;
            }
        }
        if(k)
            printf("YES\n");
    }
}
