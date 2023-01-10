#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(){
    char a[31]={0},b[31]={0};
    int n,lena,lenb;
    scanf("%d",&n);
    while((n--)>0){
        scanf("%s %s",a,b);
        lena=strlen(a);
        lenb=strlen(b);
        int maxlen=lena>=lenb?lena:lenb;
        char ans[maxlen+1];
        ans[maxlen]='\0';
        int plus=0;
        for(int i=0;i<maxlen;i++){
            if(lena-i-1<0) ans[maxlen-1-i]=b[lenb-i-1];
            else if(lenb-i-1<0) ans[maxlen-1-i]=a[lena-i-1];
            else{
                ans[maxlen-1-i]=a[lena-i-1]+b[lenb-i-1];
            }
            if(plus){
                ans[maxlen-1-i]+=1;
                plus=0;
            }
            if(ans[maxlen-1-i]>=106){
                ans[maxlen-1-i]-=58;
                plus=1;
            }
            else if(ans[maxlen-1-i]>57&&ans[maxlen-1-i]<67){
                ans[maxlen-1-i]-=10;
                plus=1;
            }
            else if((lena-i-1>=0)&&(lenb-i-1>=0))
                ans[maxlen-1-i]-=48;
        }
        if(plus) printf("1");
        printf("%s\n",ans);
    }
}
