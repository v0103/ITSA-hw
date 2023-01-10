#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    int all,a1,b1,a2,b2,sum=0;
        scanf("%d %d",&a1,&b1);
        scanf("%d %d",&a2,&b2);
        all=(a2*60+b2)-(a1*60+b1);
        if(all<=120){
            sum=all/30*30;
        }
        else if(all>120&&all<=240){
            all-=120;
            sum=120+all/30*40;
        }
        else{
            all-=240;
            sum=120+160+all/30*60;
        }
        printf("%d\n",sum);
}
