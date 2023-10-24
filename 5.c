#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
		int n = 0;
		int i = 0;
		int ret = 1;
		int sum = 0;
		for (n = 1; n<=3; n++)
		{
			ret = ret*i;
			//n的阶乘
			sum = sum + ret;//计算阶乘累计和
		}
		printf("%d\n", sum);
		return 0;
}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n<=3; n++)
//	{
//		ret = 1;//每次归1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		} 
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//		sum = sum*i;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	scanf("%s", password);
//
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	//getchar();
//	printf("请确认（Y/N）：>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')//只打印数字字符，跳过其他的
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			//printf("1111111\n");//缩进的这句是if的执行语句
//			//break;
//			continue;//本次continue后面的代码不会再执行
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	return 0;
//}