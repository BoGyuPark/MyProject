#include<stdio.h>
void DesSort(int *ptr,int len)
{
	int temp;
	for (int j = len-1; j > 0; j--) {
		for (int i = len-1; i > 0; i--)
		{
			if (ptr[i] > ptr[i - 1]) {
				temp = ptr[i];
				ptr[i] = ptr[i - 1];
				ptr[i - 1] = temp;
			}
		}
	}
	for (int i = 0; i < 7; i++)
		printf("%d ", ptr[i]);
	printf("\n");
}
main()
{
	int arr[7];
	int *ptr = &arr[0];
	printf("7개 정수를 입력\n");
	for (int i = 0; i < 7; i++) {
		printf("입력 : ");
		scanf("%d", &arr[i]);
	}
	int len = sizeof(arr) / sizeof(int);
	DesSort(arr,len);
}