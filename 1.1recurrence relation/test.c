#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define Num 20

//------------------
//度数分布（ヒストグラム）
//------------------

int main()
{
	int a[] = { 43,25,65,78,49,66,71,39,80,11,0,73,35,99,100,78,89,88,41,55 };
	int i = 0;
	int rank = 0;
	int histo[11] = { 0 };
	for (i = 0; i <= 10; i++)
	{
		histo[i] = 0;
	}
	for (i = 0; i < Num; i++)
	{
		rank = a[i] / 10;
		
		if (rank >= 0 && rank <= 10)
		{
			histo[rank]++;
		}
	}
	for (i = 0; i <= 10; i++)
	{
		printf("%3d - :%3d\n", i * 10, histo[i]);
	}
	return 0;
}