#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������Ϊ�ո� - �������г�ʼ��,�����
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);
	char ret = 0;	//������Ϸ�������״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//��Ϸ�Ľ����������������Ӯ��*������Ӯ��#��ƽ��Q����Ϸ����C
		//�ж�����Ƿ�Ӯ�ˣ�
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
;		//��������      
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')	//C��Ϸ����
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
	DisplayBoard(board, ROW, COL);
}
void menu()
{
	printf("******************************\n");
	printf("*********   1. paly   ********\n");
	printf("*********   0. exit   ********\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}