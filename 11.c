#include<stdio.h>
int main()
{

    int a;
    printf("请输入数值：");
    scanf("%d",&a);
    int mask = 1;
    int x = a;  
    while(x >9)
    {   
        x/=mask;
        mask*=10;
    }
    //printf("%d",mask);
    do{

        int d = a /mask;//1234 1
        
        
            printf("%d ",d);

        
        a%=mask;//1423 1000 423
        mask/=10;
    }
    while(mask >0);
    printf("\n");

    
    
   
    return 0;
}