#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//------------------
//漸化式(nCrの計算)
//------------------

long combi(int n, int r)
{
	int i = 0;
	long p = 1;
	for (i = 1; i <= r; i++)
	{
		p = p * (n - i + 1) / i;
	}
	return p;
}

int main()
{
	int n = 0;
	int r = 0;
	for (n = 0; n <= 5; n++)
	{
		for (r = 0; r <= n; r++)
		{
			printf("%dC%d=%ld  ", n, r, combi(n, r));
		}
		printf("\n");
	}
	return 0;
}
