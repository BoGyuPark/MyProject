#include<stdio.h>
void YesOrNo(char *ptr, int len)
{
	int j;
	for (j = 0; j < len / 2; j++) {
		if (ptr[j] != ptr[len - j - 1]) {
			printf("회문아님!!\n");
			break;
		}
	}
	if (j == len / 2)
		printf("회문 입니다.\n");
}

int Ret(char *ptr)
{
	int i = 0;
	while (ptr[i] != 0) {
		i++;
	}
	return i; 
}

main()
{
	char arr[10];
	printf("문자열 입력:");
	scanf("%s", arr);
	char *ptr = arr;

	int len = Ret(arr);
	YesOrNo(arr, len);
}