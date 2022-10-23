#define  _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <windows.h>
#include <stdio.h>
int main()
{
	//输出从1-10
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ",i);
	}
	return 0;*/

	//输出从1加到n
	/*int i = 0;
	int sum = 0;
	int n = 0;
	scanf("%d",&n);
	for (i = 1;i <= n; i++)
	{
		sum += i;
	}
	printf("%d",sum);
	return 0;*/

	//输出n的阶乘
	/*int i = 0;
	int n = 0;
	scanf("%d",&n);
	int ret = 1;
	for (i = 1;i <= n;i++)
	{
		ret *= i;
	}
	printf("%d",ret);
	return 0;*/

	//输出从1的阶乘加到10的阶乘
	/*int i = 0, j = 0, n = 0, ret = 1, sum = 0;
	scanf("%d",&n);*/
	//for (n = 1; n <= 3; n++)
	//{
	//	//计算n的阶乘之前将ret的值初始化为1
	//	ret = 1;
	//	for (j = 1; j <= n; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}


	//第二种方法：3!=3*2!简便计算过程
	/*for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d",sum);*/

	//从有序数组中查找某个数字n（二分法查找）
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 5;  //想查找的数：7
	//int sz = sizeof(arr) / sizeof(arr[0]);  //整个数组的元素个数
	//int left = 0;
	//int right = sz - 1;
	//while (left <= right)
	//{
	//	int mid = (right + left) / 2;
	//	if (arr[mid] < k)
	//	{
	//		left = mid + 1;
	//	}
	//	else if (arr[mid] > k)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("找到了,元素下标为%d\n",mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到了！！！\n");
	//}


	//编写代码：演示多个字符从两端移动，向中间汇聚
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;	//strlen作用:字符串长度
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000); //睡眠1S，得引头文件windows.h
	//	system("cls"); //清空屏幕
	//	left++;
	//	right--;
	//}

	//编写代码：模拟用户登录情景，并且只能登录三次
	//只可输入三次密码,如果密码正确则提示登录成功,如果三次输入错误，则退出程序
	//int i = 0;
	//char password[20] = {0};
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入登录密码：>");
	//	scanf("%s", password);	//password为数组名,可直接写,不用取地址符号
	//	if (strcmp(password, "123456") == 0)  //strcmp 函数的头文件为string.h
	//	{
	//		printf("登录成功!!!\n");
	//		break;
	//	}
	//}
	//if (i == 3)
	//{
	//	printf("您输入的三次密码都错误!!现在需要退出程序!!\n");
	//}
	
	return 0;
}