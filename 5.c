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
			//n�Ľ׳�
			sum = sum + ret;//����׳��ۼƺ�
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
//		ret = 1;//ÿ�ι�1
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		} 
//		//n�Ľ׳�
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
//	printf("���������룺>");
//	scanf("%s", password);
//
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	//getchar();
//	printf("��ȷ�ϣ�Y/N����>");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')//ֻ��ӡ�����ַ�������������
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
//			//printf("1111111\n");//�����������if��ִ�����
//			//break;
//			continue;//����continue����Ĵ��벻����ִ��
//		printf("%d\n", i);
//		i = i + 1;
//	}
//	return 0;
//}