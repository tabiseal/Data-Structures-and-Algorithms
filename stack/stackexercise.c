#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;//栈顶
	int capacity;
}ST;

void StackInit(ST* ps);//初始化
void StackDestory(ST* ps);//销毁
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
int StackSize(ST* ps);
bool StackEmpty(ST* ps);//判断栈是否为空

void StackInit(ST* ps)
{
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

void StackDestory(ST* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

void StackPush(ST* ps,STDataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		int newcapacity = 0;
		if (ps->capacity == 0)
		{
			newcapacity = 4;
		}
		else
		{
			newcapacity = ps->capacity * 2;
		}
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newcapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;

}


bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	return ps->a[ps->top-1];
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}


void Stacktest()
{
	ST st;
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	StackDestory(&st);

}

int main()
{
	Stacktest();

	return 0;
}
