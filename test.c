#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//�����ֵ�С��Ϸ
void contents()
{
		printf("################\n");
		printf("###1.��ʼ��Ϸ###\n");
		printf("###0.�˳���Ϸ###\n");
		printf("################\n");
}

void game()
{
	int num = 1;
	int guess = 0;
	int ret = rand() % 100 + 1;
		printf("������λ��ᣬ���ֵķ�Χ��1-100\n");
	while (num<=5)
	{
		printf("�������: ");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���!\n");
		}
		else if (ret > guess)
		{
			printf("��С��!\n");
		}
		else
		{
			printf("��ϲ�㣬������!\n");
			break;
		}
		if (num < 5)
		{
			printf("����%d�λ���\n", 5 - num);
		}
		num++;
	}
	if(num>5)
	{
		printf("��λ���������,��������%d\n", ret);
	}
}

int main()
{

	int input = 0; 
	srand((unsigned int)time(NULL));
do
{
	contents();
	printf("������ѡ��:");
	scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
