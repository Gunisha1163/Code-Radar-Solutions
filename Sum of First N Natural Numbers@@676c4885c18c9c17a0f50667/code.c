#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        int j=0;
        j+=i;
        printf("%d",j);
    }
}