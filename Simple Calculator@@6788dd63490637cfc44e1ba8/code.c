#include<stdio.h>
int main(){
    int a,b,r;
    char o;
    if (scanf("%d%d%c",&a,&b,&o)!=3){
        printf("error");
    }
    if(o=='+'){
        r=a+b;
        printf("%d",r);
    }
    else if(o=='-'){
        r=a-b;
        printf("%d",r);
    }
    else if(o=='*'){
        r=a*b;
        printf("%d",r);
    }
    else if(o=='/'){
        if(b==0){
            printf("error");
        }
        else{
            r=(float)a/b;
            printf("%d",r);
        }
    }
    else{
        printf("error");
    }
}