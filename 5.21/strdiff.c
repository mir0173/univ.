// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

int StringComp(char s1[], char s2[]);
void main(void)
{
	char exstring[10] = "";
	char compstring[10] = "";
	printf("������ �Է��ϼ��� : ");
	scanf("%s", exstring);
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%s", compstring);
	int n = StringComp(exstring, compstring);
	printf((n == 0) ? "���� �����Դϴ�." : "�ٸ� �����Դϴ�.");
}

int StringComp(char s1[], char s2[])
{
	int i;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i]) 
			return 1;
	}
	return (s1[i] == '\0' && s2[i] == '\0') ? 0 : 1;
}