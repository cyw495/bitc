#define  _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <windows.h>
#include <stdio.h>
int main()
{
	//�����1-10
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ",i);
	}
	return 0;*/

	//�����1�ӵ�n
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

	//���n�Ľ׳�
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

	//�����1�Ľ׳˼ӵ�10�Ľ׳�
	/*int i = 0, j = 0, n = 0, ret = 1, sum = 0;
	scanf("%d",&n);*/
	//for (n = 1; n <= 3; n++)
	//{
	//	//����n�Ľ׳�֮ǰ��ret��ֵ��ʼ��Ϊ1
	//	ret = 1;
	//	for (j = 1; j <= n; j++)
	//	{
	//		ret *= j;
	//	}
	//	sum += ret;
	//}


	//�ڶ��ַ�����3!=3*2!���������
	/*for (n = 1; n <= 3; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d",sum);*/

	//�����������в���ĳ������n�����ַ����ң�
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int k = 5;  //����ҵ�����7
	//int sz = sizeof(arr) / sizeof(arr[0]);  //���������Ԫ�ظ���
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
	//		printf("�ҵ���,Ԫ���±�Ϊ%d\n",mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("�Ҳ����ˣ�����\n");
	//}


	//��д���룺��ʾ����ַ��������ƶ������м���
	//char arr1[] = "welcome to bit!!!!!!";
	//char arr2[] = "####################";
	//int left = 0;
	//int right = strlen(arr1) - 1;	//strlen����:�ַ�������
	//while (left <= right)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	Sleep(1000); //˯��1S������ͷ�ļ�windows.h
	//	system("cls"); //�����Ļ
	//	left++;
	//	right--;
	//}

	//��д���룺ģ���û���¼�龰������ֻ�ܵ�¼����
	//ֻ��������������,���������ȷ����ʾ��¼�ɹ�,�����������������˳�����
	//int i = 0;
	//char password[20] = {0};
	//for (i = 0; i < 3; i++)
	//{
	//	printf("�������¼���룺>");
	//	scanf("%s", password);	//passwordΪ������,��ֱ��д,����ȡ��ַ����
	//	if (strcmp(password, "123456") == 0)  //strcmp ������ͷ�ļ�Ϊstring.h
	//	{
	//		printf("��¼�ɹ�!!!\n");
	//		break;
	//	}
	//}
	//if (i == 3)
	//{
	//	printf("��������������붼����!!������Ҫ�˳�����!!\n");
	//}
	
	return 0;
}