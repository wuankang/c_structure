#define _CRT_SECURE_NO_WARNINGS 1
//对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，
//那么其数组形式为 [1, 2, 3, 1]。
//给定非负整数 X 的数组形式 A，返回整数 X + K 的数组形式。
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/add-to-array-form-of-integer
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
//#include<stdio.h>
//#include<stdlib.h>
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	int KSize = 0;
//	//算K的位数
//	int K2 = K;
//	while (K2)
//	{
//		KSize++;
//		K2 /= 10;
//	}
//	//取得的数位数多一位
//	int len = KSize > ASize ? KSize + 1 : ASize + 1;
//	int* Arr = (int*)malloc(sizeof(int)*len);
//	//数组从最后一位开始
//	int A_end = ASize - 1;
//	int K_begin = 0;
//	int next = 0;//进位
//	int pos = 0;//开辟的数组位置
//	while (A_end >= 0 || K_begin < KSize)//34 K_begin=0,KSize=2
//	{
//		int x1 = 0, x2 = 0;
//		//A数组的值
//		if (A_end>=0)
//		{
//			x1 = A[A_end];
//			A_end--;
//		}
//		if (K_begin < KSize)
//		{
//			//K的值
//			x2 = K % 10;
//			K /= 10;
//			K_begin++;
//		}
//		//相加的值
//		int ret = x1 + x2 + next;
//		next = 0;
//		//判断ret，如果大于10就进位
//		if (ret >= 10)
//		{
//			next = 1;
//			ret -= 10;
//		}
//		//存进开辟的空间
//		Arr[pos++] = ret;
//	}
//	if (next == 1)
//	{
//		Arr[pos++] = next;
//	}
//	//反转
//	int begin = 0;
//	int end = pos - 1;
//	while (begin <= end)
//	{
//		int temp = Arr[begin];
//		Arr[begin] = Arr[end];
//		Arr[end] = temp;
//		begin++;
//		end--;
//	}
//	*returnSize = pos;
//	return Arr;
//}
//int main()
//{
//	int arr[] = { 9,9 };
//	int K = 1;
//	int Asize = sizeof(arr) / sizeof(arr[0]);
//	int returnSize = 0;
//	int*Arr=addToArrayForm(arr, Asize, K, &returnSize);
//	for (int i = 0; i < returnSize; i++)
//	{
//		printf("%d ", Arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
// 解释 :
//	向右旋转 1 步 : [7, 1, 2, 3, 4, 5, 6]
//	向右旋转 2 步 : [6, 7, 1, 2, 3, 4, 5]
//	向右旋转 3 步 : [5, 6, 7, 1, 2, 3, 4]
//
//	来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/rotate-array
//	著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include<stdio.h>
#include<stdlib.h>
//void rotate(int* nums, int numsSize, int k){
//	int* nums1 = malloc(sizeof(int)*numsSize);
//	int pos = 0;
//	int i = 0;
//	int k1 = k;
//	for (i = numsSize-1; k1 > 0; i--)
//	{
//		nums1[pos++] = nums[i];
//		k1--;
//	}
//	int begin = 0;
//	int end = pos - 1;
//	while (begin <= end)
//	{
//		int temp = nums1[begin];
//		nums1[begin] = nums1[end];
//		nums1[end] = temp;
//		begin++;
//		end--;
//	}
//	numsSize = numsSize - k;
//	for (i = 0; i < numsSize; i++)
//	{
//		nums1[pos++] = nums[i];
//	}
//	printf("[");
//	for (i = 0; i < pos; i++)
//	{
//		if (i < pos - 1)
//		{
//			printf("%d,", nums1[i]);
//		}
//		else
//		{
//			printf("%d]\n", nums1[i]);
//		}
//	}
//}
//
//void reverse(int* nums,int begin,int end)
//{
//	while (begin <= end)
//	{
//		int temp = nums[begin];
//		nums[begin] = nums[end];
//		nums[end] = temp;
//		begin++;
//		end--;
//	}
//}
//void rotate(int* nums, int numsSize, int k)
//{
//	if (k > numsSize)
//	{
//		k %= numsSize;
//	}
//	reverse(nums, 0, numsSize-1);
//	reverse(nums, 0, k-1);
//	reverse(nums, k,numsSize-1);
//}
//int main()
//{
//	int nums[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 3;
//	int sz = sizeof(nums) / sizeof(nums[0]);
//	rotate(nums,sz,k);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	printf("%d ", nums[i]);
//	return 0;
//}

//88. 合并两个有序数组
//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。你可以假设 nums1 的空间大小等于 m + n，这样它
//就有足够的空间保存来自 nums2 的元素。
//示例 1：
//输入：nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
//输出：[1, 2, 2, 3, 5, 6]
//#include<stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
//	int len = m + n;
//	//拓展空间
//	nums1 = (int*)malloc(sizeof(int)*len);
//	int i = 0;
//	int k = i + 1;
//	while (i < len)
//	{
//		if (nums1[i] == nums2[i])
//		{
//			nums1[k + 1] = nums1[i];
//			nums1[k] = nums2[i];
//			i++;
//		}
//		else if (nums1[i] < nums2[i])
//		{
//			if (nums2[i] > nums1[i + 1])
//			{
//				nums1[k + 1] = nums1[i];
//				nums1[k] = nums2[i];
//				i++;
//			}
//		}
//		else
//		{
//			nums1[i] = nums2[i];
//			i++;
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", nums1[i]);
//	}
//}
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
	int end1 = m - 1;//nums1的尾端
	int end2 = n - 1;//nums2的尾端
	int end = m + n - 1;//nums1合成的尾端
	while (end1 >= 0 && end2 >= 0)
	{
		if (nums1[end1] < nums2[end2])
		{
			nums1[end--] = nums2[end2--];
		}
		else
		{
			nums1[end--] = nums1[end1--];
		}
	}
	while (end1 >= 0)
	{
		nums1[end--] = nums1[end1--];
	}
	while (end2 >= 0)
	{
		nums1[end--] = nums2[end2--];
	}
	int i = 0;
	for (i = 0; i < (m + n - 1);i++)
		printf("%d ", nums1[i]);
	

}

int main()
{
	int nums1[] = { 1, 2, 3 };
	int nums2[] = { 2, 5, 6 };
	int sz1 = sizeof(nums1) / sizeof(nums1[0]);
	int sz2 = sizeof(nums2) / sizeof(nums2[0]);
	int m = sz1;
	int n = sz2;
	merge(nums1, sz1, m, nums2, sz2, n);
	return 0;
}
