#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
	puts("大寫轉換成小寫 請輸入 :");
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
