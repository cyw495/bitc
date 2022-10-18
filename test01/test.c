#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*变量
int main()
{
	int a, b, sum;
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("%d\n",sum);
	return 0;
}
*/
/*
常量：
字面常量
const修饰的常变量：不能更改
#define标识的常量：不能更改
枚举类型：默认从1开始 

enum SEX
{
	male = 15,
	female,
	secret
};
int main()
{
	const int i = 14;
	printf("%d\n",i);

#define max 154
	printf("%d\n", max);

	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);
	return 0;
}
*/
/*
字符串：默认最后会有一个结束标识\0【不占空间大小，但如果没有的话会一直进行输出】,输出时使用\s
int main()
{
	char arr1[] = "abcd";//默认有结束标识\0
	printf("%s\n",arr1);
	char arr2[] = {'a','b','c','d','\0'};
	printf("%s\n",arr2);
	return 0;
}
*/
/*
转义字符
int main()
{
	printf("abd\?\n");
	printf("abd\'\n");
	printf("abd\"\n");
	printf("abd\\\n");
	printf("abd\f");	//\f换页/进纸符，下一页
	printf("abd\a");
	printf("abd\b");	//\d 退格符
	printf("\n");

	//用%d输出时为数字输出，用%c输出时为字符输出 
	printf("%c\n", '\130');  //130(8进制)对应的十进制(88),88对应的ASCII码是X
	printf("%d\n",'\x30');   //30(16进制)对应的十进制(48),88对应的ASCII码是字符0

	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}
*/
/*
选择语句
int main()
{
	int input;	
	printf("加入bit,你要好好学习么？请输入0/1：");
	scanf("%d",&input);
	if (input == 1)
		printf("拿个不错的offer");
	else
		printf("卖红薯\n");
	return 0;
}
*/
/*
循环：while循环
int main()
{
	int line = 0;
	while (line < 300)
	{
		printf("加入bit后写代码：%d\n", line);
		line++;
	}
	if (line == 300)
		printf("好offer!!");
	return 0;
}*/
/*
函数的好处：可以进行多次调用 
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数字进行相加：");
	scanf("%d%d",&num1, &num2);
	int sum = Add(num1, num2);
	printf("这两个数字相加的和为：%d\n",sum);
	return 0;

}*/
/*
数组:一组相同类型的元素的集合
int main()
{
	//数组的创建:不完全初始化的默认为0或者\0
	//int arr[5] = {1,2,3,4,5};
	//数字的话：97 98 99 0 0；字符的话：a b c \0 \0；最后两个都不记长度
	char ch[5] = {'a','b','c'};
	int i = 0;
	while (i < 5)
	{
		printf("%c ", ch[i]);
		i++;
	}
	int len = strlen(ch);
	printf("%d\n",len);
	return 0;
}*/
/*
操作符：sizeof计算数组元素大小、计算数组元素个数
int main()
{
	int arr[10] = { 0 };
	printf("数组大小是：%d\n", sizeof(arr));
	printf("数组第一个元素大小是：%d\n",sizeof(arr[0]));

	//计算数组元素个数
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("这个数组大小是：%d\n",i);
	return 0;
}
int main()
{
	//++、-- 操作符
	int a = 10;
	printf("%d\n", a++); //10   先输出再+1
	printf("%d\n", ++a); //12   先+1再输出 
	return 0;
}
int main()
{
	//操作符：逻辑或||逻辑与&&
	int a = 1;
	int b = 0;
	int c = a && b;
	printf("%d\n",c);//&&全真才真

	int a = 1;
	int b = 0;
	int c = a || b;
	printf("%d\n",c); //有一个真即为真
	return 0;
}
int main()
{
	//条件操作符：条件?成立:不成立 
	int a = 0, b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n",max);
	return 0;
}
int main()
{
	//逗号表示式：从左向右计算
	//整个表达式的结果是最后一个表达式的结果
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 0;
	d = (a = b + 2, b = a + 1,c = a + 2);
	printf("%d\n",d);
	return 0;
}*/
/*
* 关键字：typedef：类型重命名(写在main函数的最开头)

typedef unsigned int u_int;
int main()
{
	unsigned int a = 10;
	u_int b = 10;
	printf("a = %d,b = %d\n", a, b);
}
//关键字：static修饰局部变量:改变了局部变量的生命周期，本质上是改变了变量的存储类型
void test()
{
	int i = 0;
	i++;
	printf("%d ",i);
}
int main()
{
	int a = 0;
	for (int a = 0;a < 10;a++) {
		test();
	}
	return 0;
}
//关键字：static修饰局部函数
extern int Add(int a, int b);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n",sum);
	return 0;
}

//关键字：define定义宏
#define Add(x,y) ((x) + (y))
int main()
{
	int sum = Add(2,3);
	printf("%d\n",4*sum);
	return 0;
}*/








