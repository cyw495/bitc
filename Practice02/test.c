#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("***************************\n");
	printf("*******  1. play   ********\n");
	printf("*******  0. exit   ********\n");
	printf("***************************\n");
}
void game()
{
	/*
	��������Ϸ��ʵ�֣�
		1.���������
		rand��������һ��0-32767������
		ʱ��-ʱ���*/
	int ret = rand() % 100 + 1;	// %10��������0-99,Ȼ��+1,��Χ����1-100
	//printf("%d\n",ret);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("������֣�>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	/*��������Ϸ�� �տ�ʼ�͵�����һ�Σ�����do..while
	* 1.�Զ�����һ��1-100֮��������
	* 2.������
	*	a.�¶��ˣ��͹�ϲ�㣬��Ϸ���� 
	*	b.�´��ˣ��������´��˻��ǲ�С�ˣ������£�ֱ���¶�
	* 3.��Ϸ����һֱ�棬�����˳���Ϸ
	*/
	int input = 0;
	srand((unsigned int)time(NULL));	//�������,��Ȼ��һֱ�����ͬ������
	do
	{
		menu();
		printf("�����ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�������˳���Ϸ!\n");
		default:
			printf("�������!����ѡ��\n");
		}
	} while (input);
	return 0;
}
