#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void game()
{
	//存储数组 - 二维数组
	char board[ROW][COL];
	//初始化棋盘为空格 - 若不进行初始化,则会有
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;	//接受游戏结束后的状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//游戏的结果：四种情况：玩家赢了*、电脑赢了#、平局Q、游戏继续C
		//判断玩家是否赢了：
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
;		//电脑下棋      
		ComputerBoard(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')	//C游戏继续
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else
	{
		printf("平局！\n");
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
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}