#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

////打印棋盘 -  这么写有漏洞:只能打印3行3列的内容
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0;i < row;i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if(i < row-1)
//			printf("---|---|---\n");
//	}
//}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//将每一行拆成两部分：%c |,另一个是---|
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)		//row-1 是因为最后一行不需要打印---|---
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家先走
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请玩家输入下棋的坐标：>\n");
		scanf("%d %d", &x, &y);
		//判断输入的坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//下棋需要考虑：坐标是否被占用
			if (board[x - 1][y - 1] == ' ')			//==用于进行判断，=用于赋值
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新进行输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新进行输入！\n");
		}
	}
}

//电脑先玩
void ComputerBoard(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		//不需要判断合法性，因为%row、%col已使xy在0-2的范围内
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断是否平局
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;	//棋盘没满
			}
		}
	}
	return 1;	//棋盘满了
}

//游戏结局
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;

	//判断三行
	for (i =  0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[0][2];
	}
	//判断平局
	//如果棋盘满了返回1，不满返回0
	int ret = IsFull(board,row,col);
	if (ret == 1)
	{
		return 'Q';	//棋盘满了则平局Q
	}
	else
	{
		//继续
		return 'C';		//游戏继续
	}
}