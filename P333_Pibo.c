#include<stdio.h>        // 0  1  1  2  3  5  8 
int Fibo(int count, int num1, int num2, int result) {
	if (count == 0)
		return;
	else
	{
		result = num1 + num2;
		printf("  %d", result);
		num1 = num2;
		num2 = result;
		return Fibo(count - 1, num1, num2, result);
	}
}

main()
{
	int i, count;
	int num1 = 0;
	int num2 = 1;
	int result = 0;
	printf("How many Fibonacci numbers do you want to print? \n");
	scanf("%d", &count);
	printf("%d  %d", num1, num2);
	Fibo(count - 2, num1, num2, result);
	printf("\n");

}