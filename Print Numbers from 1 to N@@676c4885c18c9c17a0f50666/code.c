#include<stdio.h>
int main()
{
    int n,i=1,j=0;
    scanf("%d",&n);
    while (i<=n) {
        j+=i;
        printf("%d ",j);
    }
}