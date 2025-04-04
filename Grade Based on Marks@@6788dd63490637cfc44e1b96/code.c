#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<60){
        printf("F");
    }
    else if(a<70 && a>=60){
        pritnf("D");
    }
    else if(a<80 && a>=70){
        pritnf("C");
    }
    else if(a<90 && a>=80){
        pritnf("B");
    }
    else if(a>=90){
        pritnf("A");
    }
}