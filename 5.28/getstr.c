// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* GetLine(void);
void main(void)
{
	char* msg = GetLine();
	printf("������� ���ڿ� : %s", msg);
	free(msg);
}

char* GetLine(void)
{
	char tmp[100] = "";
	printf("�Է� : ");
	scanf("%[^\n]", tmp);
	if (!strlen(tmp))
		return NULL;
	char* str = (char*)malloc((strlen(tmp) + 1) * sizeof(char));
	strcpy(str, tmp);
	return str;
}