#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b, c,k,i;
	printf("input two numbers to find the least common miltiple :");
	scanf_s("%d %d", &a, &b);
	if (a > b)
		k = a;
	else
		k = b;
	for (i = 1; i <= k; i++) {
		if (a%i == 0 && b%i == 0) {
			c = (a / i )*( b / i)*i;
			break;
		}
	}
	printf("the least common miltiple is %d \n", c);
	system("pause");
	return 0;
}
