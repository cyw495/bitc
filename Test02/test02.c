#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
ָ�룺��������ʾ��С
int main()
{
	int i = 10;
	int* x = &i;
	//* ������x��һ��ָ�����
	//int ������x��ŵĵ�ַָ��ı�������Ϊint
	*x = 20;
	printf("%p\n",x);

	//ָ������Ĵ�С:��32λ�ļ��������4���ֽڣ���64λ�ļ��������8���ֽ�
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	return 0;
}*/
/*
�ṹ�壺���� + ��ʼ�� + ����
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
	//-> ������
	struct Stu* pc = &stu;
	printf("%s %d %lf",pc->name, pc->age, pc->score);
	return 0;
}*/
/*
ifѭ����䣺0��ʾ�٣���0��ʾ��
int main()
{
	//���ꡢ���ꡢ���ꡢ׳�ꡢ���ꡢ
	int age = 44;
	if (age < 18)
		printf("����\n");
	else if (age >= 18 && age < 28)
		printf("����\n");
	else if (age >= 28 && age < 38)
		printf("����\n");
	else if (age >= 38 && age < 48)
		printf("׳��\n");
	else
		printf("����\n");
	return 0;
}*/
/*
if���

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
��ϰһ��ifѭ����

int main()
{
	//�ж�һ�����Ƿ�Ϊ����
	int num1 = 0;
	printf("�����������жϵ�����");
	scanf("%d", &num1);
	if (1 == num1 % 2)
	{
		printf("������%d\t", num1);
		printf("\n");
	}
	else
		printf("ż����%d\t", num1);
	return 0;
}*/
/*
switch �����ͣ�
{
	case ���ͳ������ʽ��
		��䣻
}
//����12345����������գ�����67�������Ϣ��
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
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������");
		break;
	}
	return 0;
}*/
/*
//while(���ʽΪ��/��0)����һֱִ��
int main()
{
	while (1)
	{
		printf("111\n");
	}
	return 0;
}
//��ӡ��1-10
int main()
{
	//��ӡ��1-10
	int i = 1;
	while (i <= 10)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}
//whileѭ����,break�������õ���ֹѭ��
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
//whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ�ӽ����жϣ����Ƿ������һ��ѭ��
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
getchar putchar���� 
int main() 
{
	//getchar �õ�һ���ַ� 
	//putchar ���һ���ַ�
	//int ch = getchar();
	//printf("%c\n",ch);
	//putchar(ch);
	//EOF �ļ�������־ 
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}*/
