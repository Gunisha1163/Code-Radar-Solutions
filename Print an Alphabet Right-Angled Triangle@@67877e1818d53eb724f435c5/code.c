#include<stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    char alphabet='A';
    for(i=1;i<=(n-'A'+1);i++){
        for(j=1;j<=i;j++){
            printf("%c ",alphabet);
        }
        ++alphabet;
        printf("\n");
    }
}