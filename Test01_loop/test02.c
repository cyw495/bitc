#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

////if��֧��䡪��ѡ�����
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	if (i)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("aaaaaa\n");
//	}
//	return 0;
//}

////break ʵ�ַ�֧���� ������б��б��ֳɲ�ͬ�ķ�֧����
//int main()
//{
//	int day = 0;
//	printf("������һ������>");
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	}
//	return 0;
//}

////default�������е���䶼������
//int main()
//{
//	int day = 0;
//	printf("������һ������>");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("�������������ȷ��������������");
//		break;
//	}
//	return 0;
//}
  
////while ����ѭ��ִ�ж�Σ���if ֻ��ִ��һ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}

////while����е�break������������ѭ��
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;			//���1 2 3 4
//			//continue;		//���1 2 3 4 ��ѭ��
//		}
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////����= �� ==
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if(i == 5)		//�����ѭ��5����Ϊ==�����5��==�ж������Ƿ����
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}

////for ѭ������ʼ�������������жϡ���������while ѭ����ȣ����������޸ĺͲ���
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		printf("%d ",i);
//	}
//	return 0;
//}

////for ѭ���е�break��continue
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//		{
//			//continue;	// 1 2 3 4 6 7 8 9 10
//			break;		//1 2 3 4
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

////һЩfor ѭ����ı��֣�ʡ�Գ�ʼ���������жϡ������Ȳ���
//int main()
//{
//	int i = 0;
//	for (; ; )
//	{
//		printf("haha\n");		//ѭ���еĳ�ʼ���������жϲ��֡��������ֿ��Խ���ʡ�ԣ����ǲ����飬���γ���ѭ��
//	}
//	return 0;
//}

////һЩfor ѭ����ı��֣�Ƕ��ѭ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j < 10; j++)
//		{
//			count++;
//			printf("count = %d,haha\n",count);
//		}
//	}
//	return 0;
//}

////һЩfor ѭ����ı��֣�Ƕ��ѭ�������г�ʼ��
//int main()
//{
//int i = 0;
//int j = 0;
//int count = 0;
//for (; i < 10; i++)
//{
//	for (; j < 10; j++)
//	{
//		count++;
//		printf("count = %d,haha\n", count);
//	}
//}
//return 0;
//}

////һЩfor ѭ����ı��֣�ʹ�ö����һ����������ѭ��
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)  //���2��hehe
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////do whileѭ������е�break��continue
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("haha\n");	//���5��haha.��Ϊcontinue,�����5��haha����ѭ��
//		i++;
//	} while (i < 10);
//	return 0;
//}

////�����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("�������������Ľ׳ˣ�>");
//	scanf("%d",&n);
//	int ret = 1;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	printf("%d ",ret);
//	return 0;
//}

////���� 1!+2!+3!+����+10!
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (i = 1;i < 11;i++)
//	{
//		ret = 1;		//������һ���׳�ʱһ���ý�result��ʼ������Ȼÿһ�ζ������һ���׳˵�ֵ��ʼ������ӣ�����ͻ�Խ��Խ��
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//    printf("1!+2!+3!+����+10!:%d", sum);
//    return 0;
//}

////��һ�����������в��Ҿ����ĳ������n����������ֲ��ң�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;	//��Ҫ���ҵ�����Ϊ5
//	printf("����������Ҫ���ҵ�ֵ��>");
//	scanf("%d",&key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
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
//			printf("%d���±��ҵ��ˣ��±�Ϊ%d\n", key, mid);
//			break;		//�����ҵ��±������ѭ��
//		}
//	}
//	if (left > right)
//	{
//		printf("%d�±�û�ҵ���\n",key);
//	}
//	return 0;
//}

////��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(100);		//0.5s ���һ��
//		system("cls");	//����windows.hͷ�ļ�
//		printf("%s\n",arr2);
//	}
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//int main()
//{
//	int i = 0;
//	char password[10] = { 0 };
//	for (i = 0;i < 3;i++)
//	{
//		printf("�������¼���룺>");
//		scanf("%s",password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("����������ȷ����¼�ɹ���\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������������룬�����˳�����!!");
//	}
//	return 0;
//}

//��3�������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d",a,b,c);
//	return 0;
//}

//���1-100�����е�3�ı���
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}*/
//	for (i = 3; i < 101; i += 3)
//		printf("%d ",i);
//	return 0;
//}

//�ҵ����������Լ��:�����������ʱ�����Լ��Ϊ������������һ����
// �����ʱ���ô�����С�����õ��Ĳ��֮ǰ���Ǹ�С���ٴ������ֱ����������ȣ��������У�����һ���������Լ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("������������������");
//	scanf("%d%d", &a, &b);
//	while ((a - b) != 0)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("���Լ��Ϊ��%d\n", b);
//	return 0;
//}

//1000-2000�����꼰�����
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d������\n",year);
//			count++;
//		}
//	}
//	printf("count = %d\n",count);
//	return 0;
//}

///*дһ����������Ϸ��
//1. �Զ�����һ��1-100֮��������
//2. ������
//	a. �¶��ˣ��͹�ϲ�㣬��Ϸ���� 
//	b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3. ��Ϸһֱ�棬�����˳���Ϸ 
//*/
//void menu()
//{
//	printf("**************************\n");
//	printf("******   1.play  *********\n");
//	printf("******   2.exit   ********\n");
//	printf("**************************\n");
//}
//void game()
//{
//	/*����һ���������srand����������㣬rand�������������
//	* rand() ����������һ��0-32767 ֮�������
//	* */
//	int ret = rand() % 100 + 1;	//%100 Ϊ0-99��+1����1-100
//	//������
//	int guess = 0;
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d",&guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶��ˣ��˳���Ϸ!\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	/*������������ã�srand �ﴫ��ʱ�䣬�ú���time(NULL)��������� time����<time.h>
//	* srand �������ص���unsigned int ��ֵ�����Խ�������ת��
//	*/
//	srand((unsigned int)time(NULL));  
//	do 
//	{
//		menu();
//		printf("�����ѡ��>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}