#include <stdio.h>

int main() {
	int n;
	scanf_s("%d", &n);
	if (n % 2 == 0) {
		printf("Even Number");
	}
	else if (n % 2 != 0)
	{
		printf("Odd Number");
	}
	
	return 0;
}