#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//һ����д����ʾ��
	printf("�������������֣�");
	int num1 = 0;
	int num2 = 0;
	//scanfʹ��ʱ1.˫�����ڲ�д�κ�"��������Ʒ�"��2.��д���š�3.��д\n[scanf����ʶ��]��4.�Ӽ�������ʱ�����ÿո񡢻س���Tab����������������
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

