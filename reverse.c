#include<stdio.h>
int main(){
    int num=1234;
    int reverse=0;
    int rem;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10 + rem;
        num/=10;
    }
    printf("%d",reverse);
    return 0;
}