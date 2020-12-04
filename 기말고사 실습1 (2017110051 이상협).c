#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("학번 : 2017110051\n");
	printf("이름 : 이상협\n\n");

	int m, n, x, y;

	scanf("%d %d %d %d", &m, &n, &x, &y);

	srand((long)time(NULL));

	int i,j;
	int k[100][100];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			k[i][j] = rand() % 99;
			printf("%3d", k[i][j]);
		}
		printf("\n");
	}

	int ka[100][100] = { 0, };
	int max = 0;
	int a, b;

	for (i = 0; i <= n - y; i++)
	{
		for (j = 0; j <= m - x; j++)
		{
			for (a = i; a < i+y; a++)
			{
				for (b = j; b < j+x; b++)
				{
					ka[i][j] += k[a][b];
				}
			}
		}
	}

	for (i = 0; i <= n - y; i++)
	{
		for (j = 0; j <= m - x; j++)
		{
			if (max < ka[i][j])
			{
				max = ka[i][j];
			}
		}
	}
	printf("%d\n", max);


	return 0;
}