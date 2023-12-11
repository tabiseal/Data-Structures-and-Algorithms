#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define Num 10

//------------------
//順位付け(ranking)
//------------------

int main()
{
	int a[] = { 69,97,53,53,53,78,81,68,69,83 };
	int rank[Num] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < Num; i++)
	{
		rank[i] = 1;
		for (j = 0; j < Num; j++)
		{
			if (a[i] < a[j])
			{
				rank[i]++;
			}
		}
	}
	printf("point ranking\n");
	for (i = 0; i < Num; i++)
	{
		printf("%6d%6d\n", a[i],rank[i]);
	}
	return 0;
}

