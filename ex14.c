#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){
    char a[100];
    int rr=1;
    while(scanf("%s",a)!=EOF){
        for(int i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j--){
            if(a[i]!=a[j]){
                printf("NO\n");
                rr=0;
                break;
            }
        }
        if(rr) printf("YES\n");
    }
}
