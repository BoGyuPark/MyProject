#include<stdio.h>
void YesOrNo(char *ptr, int len)
{
	int j;
	for (j = 0; j < len / 2; j++) {
		if (ptr[j] != ptr[len - j - 1]) {
			printf("ȸ���ƴ�!!\n");
			break;
		}
	}
	if (j == len / 2)
		printf("ȸ�� �Դϴ�.\n");
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
	printf("���ڿ� �Է�:");
	scanf("%s", arr);
	char *ptr = arr;

	int len = Ret(arr);
	YesOrNo(arr, len);
}