#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    char str1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ", str2[]="abcdefghijklmnopqrstuvwxyz";
    if (a==str1) {
        printf("Uppercase");
    }
    else if (a==str2) {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
}