#include<stdio.h>

int main(){
    int num=1217;
    int temp,rem;
    int reverse=0;
    temp=num;

    while(temp!=0){
        rem=temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;

    }
    if(num == reverse){
        printf("Number is Palindrome.");
    }
    else{
        printf("Number is not palindrome.");

    }
    return 0;
}