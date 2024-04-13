#include<stdio.h>

int main(){
    int num;
    printf("Enter the num:");
    scanf("%d",&num);
    int sum=0;

    for(int i=1;i<=num;i++){
        sum+=i;
    }
        printf("Sum is %d",sum);
    return 0;
}