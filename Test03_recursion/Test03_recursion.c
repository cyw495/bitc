#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
递归：自己调用自己的过程：将大规模的问题层层转化为一个与问题相似的较小规模的问题
*/
//接受一个整型值(无符号)，按照顺序打印出它的每一位。例如:输入1234，输出1 2 3 4
//例如：最容易得到的数是4：
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
//	printf("请输入一个无符号整数：>\n");
//	scanf("%u",&num);		//%u  表示获取一个无符号整数：
//	print(num);	//自定义的一个函数：用于打印参数中的每一位数字
//	return 0;
//}

//自定义一个函数:求字符串的长度
//int my_strlen(char* str)
//{
//	//用递归的方法写：
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
//	printf("%d\n",my_strlen(arr));			//括号里的参数是首元素的地址,即字符的地址
//	return 0;
//}

////普通方法：求n的阶乘
//int main()
//{
//	int i = 0;
//	printf("请输出你想计算的n的阶乘：>");
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

////用递归方法求n有阶乘：有一些功能，即可以用迭代的方法实现，也可以使用递归的方法实现
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
//	printf("请输入一个数：>");
//	scanf("%d",&n);
//	int ret = Fac(n);
//	printf("ret = %d\n",ret);
//	return 0;
//}

////求第n个斐波那契数：递归可以求解，但是效率太低
//int Fib(int n)
//{
//	//计算第3个fib斐波那契数的计算次数
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：>");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

////循环解出斐波那契数：计算过程非常快
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
//	printf("请输入一个数：>");
//	scanf("%d",&n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//	return 0;
//}

////数一下从1-100的所有整数中出现了多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;			//这里不能写成()||()的形式，因为99两个if都得count++
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5-1/6+......+1/99-1/100的值：方法一：s
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

////方法二：涉及到状态条件，且状态在改变的，就可使用flag
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

////求10个整数中最大值 
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int max = 0;		//设最大数为0
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		if(arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n",max);
//	return 0;
//}

////写出99乘法表
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

////写乘法口诀表：行和列自己定
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("请输入你想打印几行：>");
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

////字符串逆序（递归实现）：编写一个函数 reverse_string(char * string)
////将参数字符串中的字符反向排列，不是逆序打印
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

////计算一个数的每位之和(递归实现)：写个递归DigitSum(n),输入一个非负整数,返回组成它的数字之和
////例如：调用DigitSum(1729),返回1+7+2+9
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

//递归实现：实现n的k次方
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












