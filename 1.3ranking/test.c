#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define Max 36
#define Min -20
#define Bias 1-(Min)//最小値を配列要素の1に対応させる
#define Num 10

//------------------
//順位付け(負のデータ)ranking(negative data version)
//------------------

int main()
{
	int a[] = { -3,-3,0,2,-2,3,6,1,1,5 };
	int i = 0;
	int rank[Max + Bias + 1] = { 0 };
	for (i = 0; i < Num; i++)
	{
		rank[Bias + a[i]]++;
	}
	rank[0] = 1;
	for (i = Min + Bias; i <= Max + Bias; i++)
	{
		rank[i] = rank[i] + rank[i - 1];
	}
	
	printf("point ranking\n");
	for (i = 0; i < Num; i++)
	{
		printf("%6d%6d\n", a[i], rank[a[i] + Bias - 1]);
	}
	return 0;
}

