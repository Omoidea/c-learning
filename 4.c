#include<stdio.h>
int main()
{
    int x;
    int n =0;
    scanf("%d",&x);
        while(x>0)
        {
            //printf("here1\n");
        n++;
        x/=10;
        }
        printf("%d\n",n);






    return 0;
}
