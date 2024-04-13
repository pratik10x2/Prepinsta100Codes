#include<stdio.h>

int main(){
    int a=0;
    int b=1;
    int num;
    int nxtnum;

    printf("Enter the number:");
    scanf("%d",&num);
    printf("%d\t%d ",a,b);

    for(int i=2;i<num;i++){
        nxtnum=a+b;
        a=b;
        b=nxtnum;
        printf("\t %d",b);
    }

    return 0;

}