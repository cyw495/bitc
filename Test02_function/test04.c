#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//goto：语句实现关机程序
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again：
//	printf("提示：您的计算机将于1分钟后关机！\n");
//	scanf("%s",input);
//	if (strcmp(input,"你好") == 0)	//strcmp 函数用于比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	char input[20] = { 0 };
//	while (1)
//	{
//		system("shutdown -s -t 60");
//		printf("提示：您的计算机将于1分钟后关机！\n");
//		scanf("%s", input);
//		if (strcmp(input, "你好") == 0)	//strcmp 函数用于比较两个字符串
//		{
//			system("shutdown -a");
//			break;	//想跳出循环用break
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//库函数：memset：
//	//strcpy：函数是将一个字符串的全部内容（包括'\0'）拷贝到另一个字符串里
//	char arr1[20] = {0};
//	char arr2[10] = "hello bit";
//	strcpy(arr1, arr2);		//将arr2的值赋给arr1
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//库函数：memset 内存设置：(某个数组，用什么填充，前几个字符)
//	char arr[] = "hello bit";
//	memset(arr,'x',5);
//	printf("%s\n",arr);
//	return 0;
//}

//int get_max(int x, int y)	//传值调用：交换两个数 
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	//自定义函数：返回两数之间的最大的那个数
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max = get_max(a,b);
//	printf("%d\n",max);
//	return 0;
//}

//void Swap(int* pa, int* pb)   //传址调用
//{
//	/*
//	Swap 在被调用的时候，实参传给形参，其实形参是实参的一个临时拷贝
//	改变形参，不会改变实参的值
//	*/
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	//自定义函数：交换两个整型变量的内容
//	/*int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n",a);*/
//	int a = 10;
//	int b = 20;
//
//	printf("交换前：a=%d，b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换后：a=%d，b=%d\n",a,b);
//
//	return 0;
//}

//int is_prime(int n)
//{
//	//2 - (n-1) 之间的数字
//	int j = 0;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//自定义函数输出100-200间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ",i);
//		}
//	}
//	printf("\ncount = %d\n",count);
//	return 0;
//}

//int is_leap_year(int n)
//{
//	//if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) 
//	//	return 1;	//如果n符合if中的条件,则return 1，否则return 0
//	//return 0;
//
//	//也可以写成:直接return返回，正确返回1否则返回0
//	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
//}
//int main()
//{
//	//自定义函数：判断1000-2000里的是不是闰年
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//二分法：函数方法
//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;		//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;	//想要查找的数
//	printf("请输入您想查找的数：>");
//	scanf("%d",&key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n",ret);
//	}
//	return 0;
//}

//int main()
//{
//	//二分法：普通方法
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("请输入你想查找的元素为：>");
//	int key = 0;	//想要查找的元素
//	scanf("%d",&key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
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
//			printf("找到了，%d下标为%d\n",key, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了");
//	}
//
//	return 0;
//}

//void Add1(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	//自定义函数：每调用一次这个函数，就会将num的值加1
//	int num = 0;
//	Add1(&num);
//	printf("%d\n", num);
//	Add1(&num);
//	printf("%d\n", num);
//	Add1(&num);
//	printf("%d\n", num);
//	Add1(&num);
//	printf("%d\n", num);
//	return 0;
//}

//void Test2()
//{
//	printf("hehehehe\n");
//}
//void Test1()
//{
//	Test2();
//}
//int main()
//{
//	//函数嵌套定义和嵌套调用
//	//嵌套定义：在一个函数里定义另一个函数——不可以
//	//嵌套调用：可以调用 
//	Test1();
//	return 0;
//}

//int main()
//{
//	//链式访问:把一个函数的返回值作为另外一个函数的参数
//	int len = strlen("abc");
//	printf("%d\n",len);
//
//	//链式访问例一：
//	printf("%d\n",strlen("abc"));
//
//	//链式访问例二：
//	char arr1[10] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n",strcpy(arr1,arr2));
//
//	//链式访问例三：printf函数返回的是打印在屏幕上的个数：打印出43(两个字符返回2),打印出2(1个字符返回1),所以4321
//	printf("%d", printf("%d", printf("%d", 43)));	//4321
//	return 0;
//}

////先定义后使用：定义是一种强有力的声明
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 9;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}

//先使用后定义:少见
//int main()
//{
//	int a = 9;
//	int b = 10;
//	//声明一下Add函数:(只写类型)只声明，不能说明存在
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//函数的声明一般放在对应头文件中，函数定义一般放在对应.c文件中
//#include "add.h"
//int main()
//{
//	int a = 15;
//	int b = 30;
//	int c = Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}

