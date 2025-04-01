#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int j=0;
    for (i=1;i<=n;i++) {
        j+=i;
    }
    printf("%d",j);
}