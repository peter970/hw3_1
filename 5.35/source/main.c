#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	unsigned long long int c = 0;
	a = 1;
	b = 1;
	for (int i = 1; i < 45; i++) {
		c = a + b;
		a = b;
		b = c;
		printf("%d \n", c);
	}


	system("pause");
	return 0;
}