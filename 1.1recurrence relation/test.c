#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//------------------
//Hornerの方法
//------------------

//double fn(double x, double a[], int n)
//{
//	int i = 0;
//	double p = 0;
//	p = a[n];
//	for (i = n - 1; i >= 0; i--)
//	{
//		p = p * x + a[i];
//	}
//	return p;
//}

double fn(double x, double* pr, int n)
{
    int i = 0;
    double p = 0;
    p = pr[n];
    for (i = n - 1; i >= 0; i--)
    {
        p = p * x + pr[i];
    }
    return p;
}


int main()
{
	double a[] = { 1,2,3,4,5 };
	double x = 0;
	for (x = 1; x <= 5; x++)
	{
		printf("fn(%f)=%f\n", x, fn(x, a, 4));
	}
	return 0;
}