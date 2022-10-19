#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
指针：创建、表示大小
int main()
{
	int i = 10;
	int* x = &i;
	//* 代表着x是一个指针变量
	//int 代表着x存放的地址指向的变量类型为int
	*x = 20;
	printf("%p\n",x);

	//指针变量的大小:在32位的计算机中是4个字节；在64位的计算机中是8个字节
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}*/
/*
结构体：定义 + 初始化 + 访问
struct Stu
{
	char name[20];
	int age;
	float score;
};
int main()
{
	struct Stu stu = {"lily",25,89.5};
	printf("%s %d %lf",stu.name,stu.age,stu.score);
	printf("\n");
	//-> 操作符
	struct Stu* pc = &stu;
	printf("%s %d %lf",pc->name, pc->age, pc->score);
	return 0;
}*/
/*
if循环语句：0表示假，非0表示真
int main()
{
	//少年、青年、中年、壮年、老年、
	int age = 44;
	if (age < 18)
		printf("少年\n");
	else if (age >= 18 && age < 28)
		printf("青年\n");
	else if (age >= 28 && age < 38)
		printf("中年\n");
	else if (age >= 38 && age < 48)
		printf("壮年\n");
	else
		printf("老年\n");
	return 0;
}*/
/*
if语句

int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
	else
		printf("haha\n");
	return 0;
}*/
/*int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (1 == i % 2)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}*/
/*
练习一：if循环语

int main()
{
	//判断一个数是否为奇数
	int num1 = 0;
	printf("请输入你想判断的数：");
	scanf("%d", &num1);
	if (1 == num1 % 2)
	{
		printf("奇数：%d\t", num1);
		printf("\n");
	}
	else
		printf("偶数：%d\t", num1);
	return 0;
}*/
/*
switch （整型）
{
	case 整型常量表达式：
		语句；
}
//输入12345，输出工作日；输入67，输出休息日
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误！");
		break;
	}
	return 0;
}*/
/*
//while(表达式为真/非0)，则一直执行
int main()
{
	while (1)
	{
		printf("111\n");
	}
	return 0;
}
//打印出1-10
int main()
{
	//打印出1-10
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}
//while循环中,break用于永久的终止循环
int main()
{
	int i = 1;
	while (1)
	{
		if (i == 5)
		{
			break;	
		}
		printf("%d ",i);
		i++;
	}
	return 0;
}
//while循环中，continue的作用是跳过本次循环continue后边的代码，直接进行判断，看是否进行下一次循环
int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d ",i);
		i++;
	}
	return 0;
}*/
/*
getchar putchar函数 
int main() 
{
	//getchar 得到一个字符 
	//putchar 输出一个字符
	//int ch = getchar();
	//printf("%c\n",ch);
	//putchar(ch);
	//EOF 文件结束标志 
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}*/
