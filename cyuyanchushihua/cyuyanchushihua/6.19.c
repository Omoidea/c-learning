#include<stdio.h>
int main()
{
    int number = 0;
    int sum = 0;
    int count = 0;
    printf("计算平均数\n");
    scanf("%d", &number);
    while (number != 0) {
        sum += number;
        count++;
        scanf("%d", &number);
    }
    if (count > 0) {
        printf("计算了%d次平均数为%f\n", count, (double)sum / count);
    }
    else {
        printf("没有输入任何有效数字\n");
    }
    return 0;
}