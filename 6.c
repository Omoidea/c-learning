#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	do {
		printf("请猜一个1-100之间的数字:\n");
			scanf("%d", &a);
			count++;
			if (a > number) {
				printf("猜大了\n");
			}
			else if (a < number) {
				printf("猜小了\n");
			}

	} while (a != number);
	printf("你用了%d次猜对了", count);

	return 0;

}
