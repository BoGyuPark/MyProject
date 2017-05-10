#include<stdio.h>
void Turn(int arr[][4],int n)
{
	if (n == 1)
		return;
	else {
		int arr1[4][4];
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				arr1[j][3 - i] = arr[i][j];
			}
		}
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				printf("%3d", arr1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		Turn(arr1, n - 1);
	}	
}
main()
{
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	Turn(arr,4);
}