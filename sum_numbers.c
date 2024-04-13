#include<stdio.h>

int main()
{
    int i=2;
    int j=5;
    int ans=0;
    
    for(int k=i;k<=j;k++){
        ans+=k;
    }
    printf("sum=%d",ans);

    return 0;
}