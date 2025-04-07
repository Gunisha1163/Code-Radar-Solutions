#include<stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d%d%c",&a,&b,&o);
    if(o=='+'||o=='-'||o=='*'){
        switch(c){
            case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*':
            printf("%d",a*b);
            break;
            case '/':
            printf("%d",a/b);
            break;
        }
    }
    else{
        printf("error");
    }
}