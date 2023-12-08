#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define Num 20

//------------------
//暗号の解読(decryption of a cipher)
//------------------

int main()
{
	char table[] = "QWERTYUIOPASDFGHJKLZXCVBNM?";
	const char* ango = "KSOIDHEPZ";
	int index = 0;
	while (*ango != '\0')
	{
		if (*ango >= 'A' && *ango <= 'Z')
		{
			index = *ango - 'A';
		}
		else
		{
			index = 26;
		}
		putchar(table[index]);
		ango++;
	}
	printf("\n");
	return 0;
}

//explanation of putchar 
//https://cplusplus.com/reference/cstdio/putchar/?kw=putchar
