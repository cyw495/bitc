#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*����
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
������
���泣��
const���εĳ����������ܸ���
#define��ʶ�ĳ��������ܸ���
ö�����ͣ�Ĭ�ϴ�1��ʼ 

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
�ַ�����Ĭ��������һ��������ʶ\0����ռ�ռ��С�������û�еĻ���һֱ���������,���ʱʹ��\s
int main()
{
	char arr1[] = "abcd";//Ĭ���н�����ʶ\0
	printf("%s\n",arr1);
	char arr2[] = {'a','b','c','d','\0'};
	printf("%s\n",arr2);
	return 0;
}
*/
/*
ת���ַ�
int main()
{
	printf("abd\?\n");
	printf("abd\'\n");
	printf("abd\"\n");
	printf("abd\\\n");
	printf("abd\f");	//\f��ҳ/��ֽ������һҳ
	printf("abd\a");
	printf("abd\b");	//\d �˸��
	printf("\n");

	//��%d���ʱΪ�����������%c���ʱΪ�ַ���� 
	printf("%c\n", '\130');  //130(8����)��Ӧ��ʮ����(88),88��Ӧ��ASCII����X
	printf("%d\n",'\x30');   //30(16����)��Ӧ��ʮ����(48),88��Ӧ��ASCII�����ַ�0

	printf("%d\n", strlen("c:\test\628\test.c"));
	return 0;
}
*/
/*
ѡ�����
int main()
{
	int input;	
	printf("����bit,��Ҫ�ú�ѧϰô��������0/1��");
	scanf("%d",&input);
	if (input == 1)
		printf("�ø������offer");
	else
		printf("������\n");
	return 0;
}
*/
/*
ѭ����whileѭ��
int main()
{
	int line = 0;
	while (line < 300)
	{
		printf("����bit��д���룺%d\n", line);
		line++;
	}
	if (line == 300)
		printf("��offer!!");
	return 0;
}*/
/*
�����ĺô������Խ��ж�ε��� 
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
	printf("�������������ֽ�����ӣ�");
	scanf("%d%d",&num1, &num2);
	int sum = Add(num1, num2);
	printf("������������ӵĺ�Ϊ��%d\n",sum);
	return 0;

}*/
/*
����:һ����ͬ���͵�Ԫ�صļ���
int main()
{
	//����Ĵ���:����ȫ��ʼ����Ĭ��Ϊ0����\0
	//int arr[5] = {1,2,3,4,5};
	//���ֵĻ���97 98 99 0 0���ַ��Ļ���a b c \0 \0��������������ǳ���
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
��������sizeof��������Ԫ�ش�С����������Ԫ�ظ���
int main()
{
	int arr[10] = { 0 };
	printf("�����С�ǣ�%d\n", sizeof(arr));
	printf("�����һ��Ԫ�ش�С�ǣ�%d\n",sizeof(arr[0]));

	//��������Ԫ�ظ���
	int i = sizeof(arr) / sizeof(arr[0]);
	printf("��������С�ǣ�%d\n",i);
	return 0;
}
int main()
{
	//++��-- ������
	int a = 10;
	printf("%d\n", a++); //10   �������+1
	printf("%d\n", ++a); //12   ��+1����� 
	return 0;
}
int main()
{
	//���������߼���||�߼���&&
	int a = 1;
	int b = 0;
	int c = a && b;
	printf("%d\n",c);//&&ȫ�����

	int a = 1;
	int b = 0;
	int c = a || b;
	printf("%d\n",c); //��һ���漴Ϊ��
	return 0;
}
int main()
{
	//����������������?����:������ 
	int a = 0, b = 3;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n",max);
	return 0;
}
int main()
{
	//���ű�ʾʽ���������Ҽ���
	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
	int a = 0;
	int b = 1;
	int c = 2;
	int d = 0;
	d = (a = b + 2, b = a + 1,c = a + 2);
	printf("%d\n",d);
	return 0;
}*/
/*
* �ؼ��֣�typedef������������(д��main�������ͷ)

typedef unsigned int u_int;
int main()
{
	unsigned int a = 10;
	u_int b = 10;
	printf("a = %d,b = %d\n", a, b);
}
//�ؼ��֣�static���ξֲ�����:�ı��˾ֲ��������������ڣ��������Ǹı��˱����Ĵ洢����
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
//�ؼ��֣�static���ξֲ�����
extern int Add(int a, int b);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum = %d\n",sum);
	return 0;
}

//�ؼ��֣�define�����
#define Add(x,y) ((x) + (y))
int main()
{
	int sum = Add(2,3);
	printf("%d\n",4*sum);
	return 0;
}*/








