#include<stdio.h>
int main(){
    int a,b;
    char o;
    scanf("%d%d%c",&a,&b,&o);
    if(o=='+'||o=='-'||o=='*'){
        switch(o){
            case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*':
            printf("%d",a*b);
            break;
        }
    }
    else if(o=='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    else{
        printf("error");
    }
}