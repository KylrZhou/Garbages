#include<stdio.h>
#include<stdbool.h>
int get_integer(void);
int is_prime(int n);

int main() {
	int n, result;
	n = get_integer();
	result = is_prime(n);
	result == true ? printf("%d is a prime",n) : printf("%d is not a prime", n);
	return 0;
}

int get_integer(void) {
	int n;
	printf("Input an Integer: ");
	scanf_s("%d", &n);
	return n;
}

int is_prime(int n) {
	bool t = true;
	for (int i = 2; i < n; i++) if (n % i == 0) t = false;
	return t;
}
