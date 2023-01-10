#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,sum=0;
    while(scanf("%d",&num)!=EOF){
        for(int i=1;i<=num;i++){
            if(i%3==0){
                sum+=i;
            }
        }
        printf("%d\n",sum);
    }
}
