#include<stdio.h>
 int main(){
    int num=1234;
    int ans=0;
    
    while(num!=0){
        
        ans+=num%10;
        num=num/10;
    }
    printf("The addition of digit:%d",ans);
    return 0;
 }