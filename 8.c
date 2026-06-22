#include<stdio.h>
int main()
{
    int x;
    int digit;
    int ret = 0;
    printf("请输入一个整数：");
    scanf("%d",&x);
    while(x!=0)
    {
        digit = x%10;
        ret = ret*10 + digit;
        x/= 10;
    }

    printf("反转后的数字为：%d",ret);

    return 0;
}