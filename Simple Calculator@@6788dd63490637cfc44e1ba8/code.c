#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    if(c=='+'||c=='-'||c=='*'||c=='/'){
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