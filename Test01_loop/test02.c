#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

////if分支语句——选择语句
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	if (i)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("aaaaaa\n");
//	}
//	return 0;
//}

////break 实现分支—— 将语句列表列表划分成不同的分支部分
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：>");
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

////default——所有的语句都被跳过
//int main()
//{
//	int day = 0;
//	printf("请输入一个数：>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("您输入的数不正确，即将跳出程序。");
//		break;
//	}
//	return 0;
//}
  
////while 可以循环执行多次，而if 只能执行一次
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

////while语句中的break用于跳出整个循环
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;			//输出1 2 3 4
//			//continue;		//输出1 2 3 4 死循环
//		}
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////另附：= 和 ==
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if(i == 5)		//输出死循环5；若为==则输出5。==判断两边是否相等
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////for 循环：初始化、进行条件判断、调整，与while 循环相比，更加利于修改和查找
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

////for 循环中的break和continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			//continue;	// 1 2 3 4 6 7 8 9 10
//			break;		//1 2 3 4
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

////一些for 循环里的变种：省略初始化、条件判断、调整等部分
//int main()
//{
//	int i = 0;
//	for (; ; )
//	{
//		printf("haha\n");		//循环中的初始化、条件判断部分、调整部分可以进行省略，但是不建议，会形成死循环
//	}
//	return 0;
//}

////一些for 循环里的变种：嵌套循环
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			count++;
//			printf("count = %d,haha\n",count);
//		}
//	}
//	return 0;
//}

////一些for 循环里的变种：嵌套循环不进行初始化
//int main()
//{
//int i = 0;
//int j = 0;
//int count = 0;
//for (; i < 10; i++)
//{
//	for (; j < 10; j++)
//	{
//		count++;
//		printf("count = %d,haha\n", count);
//	}
//}
//return 0;
//}

////一些for 循环里的变种：使用多余的一个变量控制循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //输出2次hehe
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////do while循环语句中的break和continue
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("haha\n");	//输出5个haha.若为continue,则输出5个haha后死循环
//		i++;
//	} while (i < 10);
//	return 0;
//}

////计算出n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入你想计算的阶乘：>");
//	scanf("%d",&n);
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("%d ",ret);
//	return 0;
//}

////计算 1!+2!+3!+……+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (i = 1;i < 11;i++)
//	{
//		ret = 1;		//计算下一个阶乘时一定得将result初始化，不然每一次都会从上一个阶乘的值开始进行相加，结果就会越加越大
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//    printf("1!+2!+3!+……+10!:%d", sum);
//    return 0;
//}

////在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;	//想要查找的数字为5
//	printf("请输入你想要查找的值：>");
//	scanf("%d",&key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d的下标找到了，下标为%d\n", key, mid);
//			break;		//用于找到下标后跳出循环
//		}
//	}
//	if (left > right)
//	{
//		printf("%d下标没找到。\n",key);
//	}
//	return 0;
//}

////编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(100);		//0.5s 输出一次
//		system("cls");	//引入windows.h头文件
//		printf("%s\n",arr2);
//	}
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//int main()
//{
//	int i = 0;
//	char password[10] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入登录密码：>");
//		scanf("%s",password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("密码输入正确，登录成功！\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("已输入三次密码，现在退出程序!!");
//	}
//	return 0;
//}

//将3个整数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//输出1-100中所有的3的倍数
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}*/
//	for (i = 3; i < 101; i += 3)
//		printf("%d ",i);
//	return 0;
//}

//找到两数的最大公约数:两个数，相等时，最大公约数为他们其中任意一个。
// 不相等时，用大数减小数。得到的差和之前的那个小数再次相减，直到两个数相等，这两个中，任意一个都是最大公约数。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请任意输入两个数：");
//	scanf("%d%d", &a, &b);
//	while ((a - b) != 0)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("最大公约数为：%d\n", b);
//	return 0;
//}

//1000-2000中闰年及其个数
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d是闰年\n",year);
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

///*写一个猜数字游戏：
//1. 自动产生一个1-100之间的随机数
//2. 猜数字
//	a. 猜对了，就恭喜你，游戏结束 
//	b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3. 游戏一直玩，除非退出游戏 
//*/
//void menu()
//{
//	printf("**************************\n");
//	printf("******   1.play  *********\n");
//	printf("******   2.exit   ********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	/*生成一个随机数：srand函数设置起点，rand函数生成随机数
//	* rand() 函数返回了一个0-32767 之间的数字
//	* */
//	int ret = rand() % 100 + 1;	//%100 为0-99再+1，即1-100
//	//猜数字
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了，退出游戏!\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	/*随机数起点的设置：srand 里传入时间，用函数time(NULL)不用其参数 time得引<time.h>
//	* srand 函数返回的是unsigned int 的值，所以进行类型转化
//	*/
//	srand((unsigned int)time(NULL));  
//	do 
//	{
//		menu();
//		printf("请进行选择：>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}