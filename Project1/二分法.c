//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("所寻找k值的下标是：%d\n",mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("k值不在该题目数组范围内部。");
//		}
//	}
//	return 0;
//}