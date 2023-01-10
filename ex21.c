#include <stdio.h>
#include <stdlib.h>
int main(){
    int n=10;
    float arr[11];
    float max=0,min=10000;

    while((n--)>0){
        scanf("%f",&arr[10-n-1]);
    }
    for(int i=0;i<10;i++)
        if(arr[i]>max) max=arr[i];
    for(int i=0;i<10;i++)
        if(arr[i]<min) min=arr[i];
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
}
