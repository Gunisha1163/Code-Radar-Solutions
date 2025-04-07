#include<stdio.h>
int main(){
    int a,b;
    char o;
    float r;
    scanf("%d%d%c",&a,&b,&o);
    if(o=='+'){
        r=a+b;
        printf("%.2f",r);
    }
    else if(o=='-'){
        r=a-b;
        printf("%.2f",r);
    }
    else if(o=='*'){
        r=a*b;
        printf("%.2f",r);
    }
    else if(o=='/'){
        if(b==0){
            printf("error");
        }
        else{
            r=(float)a/b;
            printf("%.2f",r);
        }
    }
    else{
        printf("error");
    }
}