#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	int sum = 1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	getch();
}