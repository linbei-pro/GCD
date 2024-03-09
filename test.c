
#include<stdio.h>

int gcd(int m, int n)//辗转相除法
{
	if (n == 0)
	{
		return m;
	}
	return gcd(n, m % n);
}

int main() {

	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	printf("%d",gcd(a, b));


	return 0;
}
