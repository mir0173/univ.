// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int StringLength(char s[]);
void main(void)
{
	char exstring[10] = "";
	printf("������ �Է��ϼ��� : ");
	scanf("%s", exstring);
	int n = StringLength(exstring);
	printf("�־��� ������ ���̴� %d�Դϴ�.\n", n);
}

int StringLength(char s[])
{
	int i;
	for (i = 0; s[i] != '\0'; i++) ;
	return i;
}