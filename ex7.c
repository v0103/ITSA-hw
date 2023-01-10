#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    int num,in1,in2,in3,in4;
    char op;
    scanf("%d",&num);
    while((num--)>0){
        scanf(" %c %d %d %d %d",&op,&in1,&in2,&in3,&in4);
        if(op=='-'){
            printf("%d %d\n",in1-in3,in2-in4);
        }
        else if(op=='+'){
            printf("%d %d\n",in1+in3,in2+in4);
        }
        else if(op=='*'){
            printf("%d %d\n",in1*in3-in2*in4,in1*in4+in2*in3);
        }
    }
}
