#include <stdio.h>
int sum(int a, int b, int c, int d, int i, int f);

int main(int argc, char const *argv[])
{
	int res;
	res = sum(5, 10, 15, 20, 25, 35);
	printf("%d\n", res);
	return 0;
}