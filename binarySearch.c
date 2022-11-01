#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binarySearch(int b[],int  size,int x)
{
	
	int start =0 ;
	int end = size - 1;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (mid == x)
			return mid;
		else if (mid > x)
			end = mid - 1;
		else 
			start = mid + 1;
	}
	printf("gwejkgw");

}
int main()
{
	int num;
	int A[100];
	for (int i = 0; i < 100; i++)
	{
		A[i] = i+1;
	}
	printf("Enter the number to find");
	scanf("%d", &num);
	printf("The %d is at position %d in series:",num, binarySearch(A, 100, num) );


	return 0;
}