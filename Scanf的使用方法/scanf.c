#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//一般先写个提示：
	printf("请输入两个数字：");
	int num1 = 0;
	int num2 = 0;
	//scanf使用时1.双引号内不写任何"非输入控制符"、2.不写逗号、3.不写\n[scanf不能识别]、4.从键盘输入时可以用空格、回车、Tab键隔开，数量不限
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}

