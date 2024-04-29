#include<stdio.h>
#include<math.h>

// //using Inbuilt function pow
// int main(){
//     int a,b;
//     printf("Enter the base:");
//     scanf("%d",&a);
//     printf("Enter the exponent:");
//     scanf("%d",&b);

//     int result=pow(a,b);
//     printf("%d^%d=%d",a,b,result);
//     return 0;
// }

//Without using inbuilt function
int main(){
     int a,b;
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the exponent:");
    scanf("%d",&b);
    int result=1;

    while(b!=0){
        result*=a;
        b--;
    }
      printf("Answer=%d",result);

    return 0;
}