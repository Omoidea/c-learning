#include<stdio.h>
int main()
{
    int x;
    int isprime = 1;
    printf("请输入一个数值：");
    scanf("%d",&x);
    for(int i=2;i<x;i++)
    {
        if(x%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime == 1){
        printf("%d是素数",x);
    }
    else{
        printf("%d不是素数",x);
    }


    return 0;
}