#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	//��ֵ�൱�ڱ�������
	int i = 0;
	int j = 0;
	for (i = 0; i <= rows; i++)
	{
		for (j = 0; j <= cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------ɨ����Ϸ-----------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
	printf("------------ɨ����Ϸ-----------\n");
}


//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����,��countΪ0��ʱ��,count���ٲ���
	int count = 10;
	while (count)
	{
		//��������±�ֵ
		//rand() % row ��Χ��0-8��+1��Ϊ1-9
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


//static
//1. ���ξֲ�����
//2. ����ȫ�ֱ���
//3. ���κ���

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	/*1.�����Ų������
	* 2.������괦�ǲ�����
	*	(1).���ס������ź�ը����--��Ϸ�� 
	*	(2).�����ס���ͳ��������Χ�м����ף��洢�Ų��׵���Ϣ��show���飬��Ϸ����
	*/
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų�����꣺>");
		scanf("%d%d", &x, &y);	//x--(1,9)    y--(1,9)

		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//����������£�ͳ��x,y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//��ʾ�Ų������Ϣ
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}








