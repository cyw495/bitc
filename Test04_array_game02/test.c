#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//��������9*9�����̣�����Ĵ�С��Ƴ�11*11�Ϻ�
	char mine[ROWS][COLS] = {0};	//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {0};	//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine,ROWS, COLS, '0');
	InitBoard(show,ROWS, COLS, '*');

	//��ӡ����:��ʼ������ʱ����ֻ��ӡ9*9
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);


	//������
	SetMine(mine, ROW, COL);

	//�Ų���
	FindMine(mine,show, ROW, COL);
}
void menu()
{
	printf("***************************\n");
	printf("*******   1. paly   *******\n");
	printf("*******   0. exit   *******\n");
	printf("***************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();	//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}