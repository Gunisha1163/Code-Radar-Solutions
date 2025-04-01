#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n){
        j+=i;
        printf("%d ",j);
    }
}