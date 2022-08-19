#include<stdio.h>
/*

.**....**.
*..*..*..*
 *..**..*
  *....*
   *..*
	**
	
.**...**.
*..*.*..*
 *..*..*
  *...*
   *.*
	*
*/

int main()
{
	int i, j, n;

	scanf("%d", &n);
	// 첫번째 줄 출력 > 이것만 규칙이 어긋나서
	printf(" **");
	for (i = 0; i < n; i++)
	{
		printf(" ");
	}
	printf("** \n");
	//4개의 점이 찍히는 포인트를 기준으로 출력
	// p1  p4의 위치를 정하고
	// p1, p2 는 ++
	// p3, p4 는 --
	// 중요한 조건 >>
	// 점이 안찍히는 조건(점이 줄어드는 조건?)

	int p1, p2, p3, p4;
	// 끝나는 지점을 알수있어서 break를 직접 걸겠다.
	// i 반복이 끝나는 지점은 p1, p4가 겹치거나 1차이 나는 순간
	// j 반복이 끝나는 지점은 p4가 찍히는 순간 > 줄바꿈
	// 끝나는 지점은 우리가 직접 지정할거야
	// 반복문을 안에 넣어줘야겠지?

	i = j = 0;
	p1 = 0;
	p2 = p1 + 3;
	p3 = p2 + n - 1;
	p4 = p3 + 3;
	while(1) 
	{
		while(1)
		{
			if (j == p1 || j == p2 || j == p3 || j == p4) // 점이 찍히는 조건
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
			if (j == p4) break;
			j++;
		}
		printf("\n");
		j = 0;
		p1++, p2++, p3--, p4--;
	}

	return 0;
}
