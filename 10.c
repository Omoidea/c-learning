#include<stdio.h>
int main()
{
    int a,b,c;
    int sum =10;
   // printf("请输入三个数值：");
    //scanf("%d %d %d",&a,&b,&c);
    for(int a=0;a<sum;a++)
    {
        for(int b=0;b<sum/2;b++)
        {
            for(int c=0;c<sum/5;c++)
            {
                if(a+b*2+c*5 ==sum)
                {
                    printf("需要用%d个一角%d个二角%d个五角\n",a,b,c);
                }
                
            }
        }

    }


    return 0;
}