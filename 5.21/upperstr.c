// 25101150 ������
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable: 6031)
#include <stdio.h>

void ToUpperString(char s[]);
void main(void)
{
	char exstring[10] = "";
	printf("������ �Է��ϼ��� : ");
	scanf("%s", exstring);;
	printf("���� ���� : %s\n", exstring);
	ToUpperString(exstring);
	printf("�빮�� ��ȯ : %s\n", exstring);
}

void ToUpperString(char s[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
	}
}