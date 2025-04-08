#include<stdio.h>
int main(){
    int a,b;
    char op;
    if(scanf("%d%d%c",&a,&b,&op)!=3){
        printf("error");
    }
    if(op=='+'){
        printf("%d",a+b);
    }
    else if(op=='-'){
        printf("%d",a-b);
    }
    else if(op=='*'){
        printf("%d",a*b);
    }
    else if(op=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    else {
        printf("error");
    }
}