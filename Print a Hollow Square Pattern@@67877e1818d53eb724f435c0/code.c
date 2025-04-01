#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            if (i==0 || i==n || j==0 || j==n) {
                printf("* ");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}