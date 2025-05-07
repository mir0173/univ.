// 25101150 ±èÇö¹Î
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void main(void)
{
	char arr[] = { 'p', 'l', 'u', 'm', 'b' };
	printf("Á¤¹æÇâ : ");
	for (int i = 0; i < 5; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n¿ª¹æÇâ : ");
	for (int i = 4; i > -1; i--)
	{
		printf("%c ", arr[i]);
	}
}