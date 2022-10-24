#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*
	* F11 逐语句 
	* f10 逐过程
	作业一：=和== 的区别：= 给语句赋值，== 判断是否相等
	作业二：将三个整数从大到小输出
	作业三：输出1-100中所有的3的倍数
	作业四：找到两数的最大公约数：普通法 + 辗转相除法
	作业五：闰年：能被4整除，不能被100整除 / 能被400整除，输出1000-2000里的闰年及其个数
	作业六：输出100-200里的素数
	*/
	//int i = 0;
	//for (i = 1;i < 10; i++)
	//{
	//	if (i = 6)	//会输出死循环，==会进行判断
	//	{
	//		printf("%d ",i);
	//	}
	//}

	/*//作业二：将3个整数从大到小输出
	//【先比较第一、二个整数大小，再比较一、三整数大小，最后比较二、三整数大小】
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d",&a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d",a,b,c);*/


	//作业三：输出1-100中所有的3的倍数：方法一
	/*int i = 0;
	for (i = 0; i <= 100; i+=3)
	{
		printf("%d ",i);
	}*/

	//输出1-100中所有的3的倍数：方法二
	/*int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d ", i);
		}
	}*/


	//找到两数的最大公约数:最大公约数不会比两数较小数大
	//int i = 0;		//i，j 分别为第一、二个数
	//int j = 0;
	//scanf("%d%d",&i, &j);
	//int max = i > j ? j : i;	//先让最大公约数等于两数之中较小值
	//while (1)
	//{
	//	if (i % max == 0 && j % max == 0)
	//	{
	//		printf("最大公约数为：%d\n",max);
	//		break;		//找到后跳出整个循环
	//	}
	//	max--;
	//}


	//辗转相除法：不只一次，用while
	// 1.m n p三个位置，a b 两个数字取余为c;a放在m里,b放在n里，c放在p里
	// 2.(a % b = 0) ? (a即为最大公约数) ：(将b赋值给m，将c赋值给n，再次取模)
	// 3.若结果为0则c为最大公约数，若再次取模结果不为0则重复第二步
	//int a = 0;
	//int b = 0;
	//scanf("%d%d",&a,&b);
	//int t = 0;
	//while (t = a % b)
	//{
	//	//t = a % b;
	//	a = b;
	//	b = t;
	//}
	//printf("最大公约数为：%d\n", b);


	//作业五：输出1000-2000中的闰年及其个数：243个闰年
	/*int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d为闰年\n",year);
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d为闰年\n",year);
			count++;
		}
	}
	printf("1000-2000中闰年的个数为%d\n",count);*/


	//输出100-200 里的素数
	//计算方法：2到i-1之间的数字去试除i，看能不能整除
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int flag = 1;	//flag为1的话，假设i为素数，且只能放在局部变量中定义
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		//break 会跳出离它最近的一个循环：跳出说明它不是素数 或 i = j
		if (flag == 1)
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}