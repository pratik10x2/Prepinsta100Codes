#include<stdio.h>

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num-1);
}

int main(){
    int num=7;
    int fact=factorial(num);
    // int fact=1;

    // for(int i=num;i>=1;i--){
    //     fact=fact*i;

    // }
    printf("%d",fact);
    return 0;
}