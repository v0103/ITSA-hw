#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,a,b,ans=0;
    scanf("%d",&n);
    int arr[25]={0};
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        for(int j=a;j<b;j++)
            arr[j]++;
    }
    for(int i=1;i<25;i++)
        if(arr[i]>ans)
            ans=arr[i];
    printf("%d\n",ans);
}