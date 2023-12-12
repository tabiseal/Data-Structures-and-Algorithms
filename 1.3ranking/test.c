#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define Max 100
#define Min 0
#define Num 10

//------------------
//順位付け(ranking)improved version
//------------------

int main()
{
	int a[] = { 69,97,53,53,53,78,81,68,69,83 };
	int i = 0;
	int rank[Max + 2] = { 0 };
	for (i = 0; i < Num; i++)
	{
		rank[a[i]]++;//各得点に対応する添え字の配列の内容を+1
		//Increment the content of the array corresponding to each score by 1
	}
	rank[Max + 1] = 1;
	for (i = Max; i >= Min; i--)
	{
		rank[i] = rank[i] + rank[i + 1];//1つ右の要素の内容を加える
		//Add the content of the element to the right by 1
	}
	printf("point ranking\n");
	for (i = 0; i < Num; i++)
	{
		printf("%6d%6d\n", a[i], rank[a[i] + 1]);//得点+1の位置に順位が入っている
		//The rank is placed at the position corresponding to the score + 1
	}
	return 0;
}

