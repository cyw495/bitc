#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main()
//{
//	//goto�����ʵ�ֹػ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//again��
//	printf("��ʾ�����ļ��������1���Ӻ�ػ���\n");
//	scanf("%s",input);
//	if (strcmp(input,"���") == 0)	//strcmp �������ڱȽ������ַ���
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
//		printf("��ʾ�����ļ��������1���Ӻ�ػ���\n");
//		scanf("%s", input);
//		if (strcmp(input, "���") == 0)	//strcmp �������ڱȽ������ַ���
//		{
//			system("shutdown -a");
//			break;	//������ѭ����break
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//�⺯����memset��
//	//strcpy�������ǽ�һ���ַ�����ȫ�����ݣ�����'\0'����������һ���ַ�����
//	char arr1[20] = {0};
//	char arr2[10] = "hello bit";
//	strcpy(arr1, arr2);		//��arr2��ֵ����arr1
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	//�⺯����memset �ڴ����ã�(ĳ�����飬��ʲô��䣬ǰ�����ַ�)
//	char arr[] = "hello bit";
//	memset(arr,'x',5);
//	printf("%s\n",arr);
//	return 0;
//}

//int get_max(int x, int y)	//��ֵ���ã����������� 
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
//	//�Զ��庯������������֮��������Ǹ���
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max = get_max(a,b);
//	printf("%d\n",max);
//	return 0;
//}

//void Swap(int* pa, int* pb)   //��ַ����
//{
//	/*
//	Swap �ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
//	�ı��βΣ�����ı�ʵ�ε�ֵ
//	*/
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	//�Զ��庯���������������ͱ���������
//	/*int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n",a);*/
//	int a = 10;
//	int b = 20;
//
//	printf("����ǰ��a=%d��b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("������a=%d��b=%d\n",a,b);
//
//	return 0;
//}

//int is_prime(int n)
//{
//	//2 - (n-1) ֮�������
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
//	//�Զ��庯�����100-200�������
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
//	//	return 1;	//���n����if�е�����,��return 1������return 0
//	//return 0;
//
//	//Ҳ����д��:ֱ��return���أ���ȷ����1���򷵻�0
//	return ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
//}
//int main()
//{
//	//�Զ��庯�����ж�1000-2000����ǲ�������
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

//���ַ�����������
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
//	return -1;		//�Ҳ�����
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;	//��Ҫ���ҵ���
//	printf("������������ҵ�����>");
//	scanf("%d",&key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}

//int main()
//{
//	//���ַ�����ͨ����
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("������������ҵ�Ԫ��Ϊ��>");
//	int key = 0;	//��Ҫ���ҵ�Ԫ��
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
//			printf("�ҵ��ˣ�%d�±�Ϊ%d\n",key, mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
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
//	//�Զ��庯����ÿ����һ������������ͻὫnum��ֵ��1
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
//	//����Ƕ�׶����Ƕ�׵���
//	//Ƕ�׶��壺��һ�������ﶨ����һ����������������
//	//Ƕ�׵��ã����Ե��� 
//	Test1();
//	return 0;
//}

//int main()
//{
//	//��ʽ����:��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
//	int len = strlen("abc");
//	printf("%d\n",len);
//
//	//��ʽ������һ��
//	printf("%d\n",strlen("abc"));
//
//	//��ʽ����������
//	char arr1[10] = { 0 };
//	char arr2[] = "bit";
//	printf("%s\n",strcpy(arr1,arr2));
//
//	//��ʽ����������printf�������ص��Ǵ�ӡ����Ļ�ϵĸ�������ӡ��43(�����ַ�����2),��ӡ��2(1���ַ�����1),����4321
//	printf("%d", printf("%d", printf("%d", 43)));	//4321
//	return 0;
//}

////�ȶ����ʹ�ã�������һ��ǿ����������
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

//��ʹ�ú���:�ټ�
//int main()
//{
//	int a = 9;
//	int b = 10;
//	//����һ��Add����:(ֻд����)ֻ����������˵������
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}

//����������һ����ڶ�Ӧͷ�ļ��У���������һ����ڶ�Ӧ.c�ļ���
//#include "add.h"
//int main()
//{
//	int a = 15;
//	int b = 30;
//	int c = Add(a, b);
//	printf("%d\n",c);
//	return 0;
//}

