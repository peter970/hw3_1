#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
	puts("�j�g�ഫ���p�g �п�J :");
	char string[100];
	gets(string);
	for (int i = 0; i < strlen(string); i++)
	{
		string[i] = toupper(string[i]);
	}
	puts(string);

	system("pause");
	return 0;
}
