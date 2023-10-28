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
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password,"123456")==0)//==不能用来比较两个字符串是否相同，应该用一个库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均错误，请退出\n");
	}
	return 0;
}
////演示多个字符从两端移动向中间汇聚
//int main()
//{
//	//char arr = "abc";
//	//[a b c \0]
//	//0  1 2  3
//	//4-2
//	char arr1[] = "welcome to bir!!!!!!!!!";
//	char arr2[] = "#######################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//err 求最后一个元素的下标不能-1，需要-2
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统明命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//
//	return 0;
//} 
//查找有序数组中的某一个数值(二分查找)
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int right = sz-1;//右下标
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
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	//写一个代码，再arr数组(有序)中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d\n", sz);
//	for (i=0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf( "找到了，下标是：%d\n", i );
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}