#include<stdio.h>
#include<math.h>

int order(int num){
    int len=0;
    while(num){
        len++;
        num=num/10;
    }
    return len;
}
int armstrong(int num,int order){
    // if(num == 0){
    //     return 0;
    // }
    // int digit=num%10;
    
    // return pow(digit,order) + armstrong(num/10,order);

    int temp=num;
    int sum=0;
    int digit;

    while(temp!=0){
        digit=temp%10;
        sum=sum+pow(digit,order);
        temp=temp/10;
    }
    return sum;

}
int main(){
    int num=163455;
    int len=order(num);
    if(num==armstrong(num,len)){
        printf("Armstrong.");
    }
    else{
        printf("Not armstrong");
    }
    return 0;
}