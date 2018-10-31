#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int a, b, c,d;
	printf("base and exponent \n");
	scanf_s("%d %d", &a, &b);
	c = pow(a, b);
	printf("%d \n", c);

	system("pause");
	return 0;
}