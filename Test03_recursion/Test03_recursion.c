#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
�ݹ飺�Լ������Լ��Ĺ��̣������ģ��������ת��Ϊһ�����������ƵĽ�С��ģ������
*/
//����һ������ֵ(�޷���)������˳���ӡ������ÿһλ������:����1234�����1 2 3 4
//���磺�����׵õ�������4��
// 1234 / 10 = 123   1234 % 10 = 4
// 123  / 10  = 12      123  %  10 = 3
//  12  /10  =  1         12 %  10    = 2
// 1  /   10  =0           1 %  10   =    1  
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("������һ���޷���������>\n");
//	scanf("%u",&num);		//%u  ��ʾ��ȡһ���޷���������
//	print(num);	//�Զ����һ�����������ڴ�ӡ�����е�ÿһλ����
//	return 0;
//}

//�Զ���һ������:���ַ����ĳ���
//int my_strlen(char* str)
//{
//	//�õݹ�ķ���д��
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\0']
//	printf("%d\n",my_strlen(arr));			//������Ĳ�������Ԫ�صĵ�ַ,���ַ��ĵ�ַ
//	return 0;
//}

////��ͨ��������n�Ľ׳�
//int main()
//{
//	int i = 0;
//	printf("�������������n�Ľ׳ˣ�>");
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n", ret);
//	return 0;
//}

////�õݹ鷽����n�н׳ˣ���һЩ���ܣ��������õ����ķ���ʵ�֣�Ҳ����ʹ�õݹ�ķ���ʵ��
//int Fac(int n)
//{
//	if (n < 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("������һ������>");
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("ret = %d\n",ret);
//	return 0;
//}

////���n��쳲����������ݹ������⣬����Ч��̫��
//int Fib(int n)
//{
//	//�����3��fib쳲��������ļ������
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("������һ������>");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

////ѭ�����쳲���������������̷ǳ���
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ������>");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

////��һ�´�1-100�����������г����˶��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;			//���ﲻ��д��()||()����ʽ����Ϊ99����if����count++
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

////����1/1-1/2+1/3-1/4+1/5-1/6+......+1/99-1/100��ֵ������һ��s
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i % 2 == 0) 
//			sum -= 1.0 / i;
//		else
//			sum += 1.0  / i;
//
//	}
//	printf("sum = %lf\n",sum);
//	return  0;
//}

////���������漰��״̬��������״̬�ڸı�ģ��Ϳ�ʹ��flag
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

////��10�����������ֵ 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = 0;		//�������Ϊ0
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		if(arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n",max);
//	return 0;
//}

////д��99�˷���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%-2d	", i , j , i * j );
//		}
//		printf("\n");
//	}
//	return 0;
//}

////д�˷��ھ����к����Լ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("�����������ӡ���У�>");
//	scanf("%d",&n);
//	for (i = 1;i <= n;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d	",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////�ַ������򣨵ݹ�ʵ�֣�����дһ������ reverse_string(char * string)
////�������ַ����е��ַ��������У����������ӡ
//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

////����һ������ÿλ֮��(�ݹ�ʵ��)��д���ݹ�DigitSum(n),����һ���Ǹ�����,���������������֮��
////���磺����DigitSum(1729),����1+7+2+9
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int i = 1729;
//	int ret = DigitSum(i);
//	printf("%d\n",ret);
//	return 0;
//}

//�ݹ�ʵ�֣�ʵ��n��k�η�
double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / (Pow(n,-k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d",&n,&k);
	double ret = Pow(n,k);
	printf("%lf\n",ret);
	return 0;
}












