#include <stdio.h>

int a[5][5];
int main() 
{
	int cnt = 0;
	int i, j;
	
	for(i=0; i<=4; i++)
	{
		for(j=4; j>=4-i; j--)
		{
			a[i][j] = ++cnt;
		}
	}
	
	for(i=0; i<=4; i++)
	{
		for(j=0;  j<=4; j++)
		{
			if(a[i][j] == 0) printf("   ");
			else  printf("%3d", a[i][j]);
		}
		printf("\n");
	}


	return 0;
}
