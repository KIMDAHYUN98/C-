#include<stdio.h>

int main_54321()
{
	int i, j, n;

	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}
