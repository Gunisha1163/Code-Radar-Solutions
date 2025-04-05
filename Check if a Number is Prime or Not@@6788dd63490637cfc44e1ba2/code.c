#include<stdio.h>
int main(){
    int a,i,isP=1;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    } 
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                isP=0;
                break;
            }
        }
        if (isP){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
}