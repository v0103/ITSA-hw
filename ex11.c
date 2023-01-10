#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        int *str=malloc(sizeof(int)*a*b+1);
        for(int i=0;i<a*b;i++){
            scanf("%d",&str[i]);
        }
        for(int i=0;i<b;i++){
            for(int j=i;j<a*b;j+=b){
                printf("%d",str[j]);
                c++;
                if(c<a) printf(" ");
            }      
            puts("");
            c=0;
        }
    }
}
