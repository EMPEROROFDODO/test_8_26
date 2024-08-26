#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字的小游戏
void contents()
{
		printf("################\n");
		printf("###1.开始游戏###\n");
		printf("###0.退出游戏###\n");
		printf("################\n");
}

void game()
{
	int num = 1;
	int guess = 0;
	int ret = rand() % 100 + 1;
		printf("你有五次机会，数字的范围是1-100\n");
	while (num<=5)
	{
		printf("请猜数字: ");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("猜大了!\n");
		}
		else if (ret > guess)
		{
			printf("猜小了!\n");
		}
		else
		{
			printf("恭喜你，猜中了!\n");
			break;
		}
		if (num < 5)
		{
			printf("还有%d次机会\n", 5 - num);
		}
		num++;
	}
	if(num>5)
	{
		printf("五次机会已用完,该数字是%d\n", ret);
	}
}

int main()
{

	int input = 0; 
	srand((unsigned int)time(NULL));
do
{
	contents();
	printf("请做出选择:");
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}
