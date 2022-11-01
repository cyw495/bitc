#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//一维数组的创建与初始化
//	int i = 0;
//	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};		//完全初始化
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };		
//	int arr3[10] = { 1,2,3,4,5 };					//不完全初始化
//	char ch[] = { 'b','i','t' };							//b i t，数组长度为3,字符串长度为随机值,因为没有\0
//	char ch2[] = "bit";								//b、 i、 t、 \0
//	//一维数组的使用：方法一：
//	int  i = 0;
//	for (i = 0;i < 10 ; i++)
//	{
//		printf("%d  ", arr1[i]);
//	}
//	//一维数组的使用：方法二：
//	int* p = &arr1[0];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//一维数组在内存中的存储
//	for (i = 0; i < 10; i++)
//	{
//		printf("arr[%d] = %p\n",i,&arr1[i]);
//	}
//	//二维数组 
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };		//形式一
// int arr1[3][4] = { {1,2},{3,4},{5,6} };						//形式二:行可以省略(省略的补0)，但列不可以
//	int i = 0;
//	int j = 0;
//	//二维数组的使用：方法一：
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d	",i,j, arr1[i][j]);
//		}
//		printf("\n");
//	}
//	//方法二：利用指针
//	int* p = &arr1[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %d	", i, j, *p);
//			p++;
//		}
//		printf("\n");
//	}
// 
////二维数组在内存中的存储
//int i = 0;
//int j = 0;
//for (i = 0; i < 3; i++)
//{
//	for (j = 0; j < 4; j++)
//	{
//		printf("arr1[%d][%d] = %p\n",i,j,arr1[i][j]);
//	}
//}
//return 0;
//}

///*数组名：数组首元素的地址
//	* 1. sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组
//	* 2. &数组名，取出的是数组的地址。&数组名，数组名表示整个数组
//	* 排序为升序，冒泡排序：两两相邻的元素进行比较，可能的话进行交
//*/
//void bubble_sort(int arr[],int sz)
//{
//	//确定趟数
//	int i = 0;
//	for (i = 0;i < sz -1;i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0;j < sz-i-1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	//正常数组 
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//调整/排序
//	bubble_sort(arr,sz);
//	//输出
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d\t",arr[i]);
//	}
//	return 0;
//}
