// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* StringCopy(char* src);
void main(void)
{
	char* dst = StringCopy("Hello");
	printf("����� ���� : %s\n", dst);
	free(dst);
}

char* StringCopy(char* src)
{
	char* dst = (char*)malloc((strlen(src) + 1) * sizeof(char));
	strcpy(dst, src);
	return dst;
}