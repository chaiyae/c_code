#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//==���������Ƚ������ַ����Ƿ���ͬ��Ӧ����һ���⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("����������������˳�\n");
	}
	return 0;
}
////��ʾ����ַ��������ƶ����м���
//int main()
//{
//	//char arr = "abc";
//	//[a b c \0]
//	//0  1 2  3
//	//4-2
//	char arr1[] = "welcome to bir!!!!!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//err �����һ��Ԫ�ص��±겻��-1����Ҫ-2
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�������һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//
//	return 0;
//} 
//�������������е�ĳһ����ֵ(���ֲ���)
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int left = 0;//���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int right = sz-1;//���±�
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] <k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	//дһ�����룬��arr����(����)���ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz);
//	for (i=0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf( "�ҵ��ˣ��±��ǣ�%d\n", i );
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}