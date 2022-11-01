#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//.h文件中放函数的声明 

//初始化棋盘
void InitBoard(char board[ROW][COL],int row, int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerBoard(char board[ROW][COL], int row, int col);

//判断结果
char IsWin(char board[ROW][COL], int row, int col);
