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
	猜数字游戏的实现：
		1.生成随机数
		rand函数返回一个0-32767的数字
		时间-时间戳*/
	int ret = rand() % 100 + 1;	// %10的余数是0-99,然后+1,范围就是1-100
	//printf("%d\n",ret);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d",&guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	/*猜数字游戏： 刚开始就得运行一次：所以do..while
	* 1.自动生成一个1-100之间的随机数
	* 2.猜数字
	*	a.猜对了，就恭喜你，游戏结束 
	*	b.猜错了，会告诉你猜大了还是猜小了，继续猜，直到猜对
	* 3.游戏可以一直玩，除非退出游戏
	*/
	int input = 0;
	srand((unsigned int)time(NULL));	//必须存在,不然会一直输出相同的数字
	do
	{
		menu();
		printf("请进行选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("您即将退出游戏!\n");
		default:
			printf("输入错误!重新选择。\n");
		}
	} while (input);
	return 0;
}
