#include <stdio.h>
int hello(void);

int main(int argc, char const *argv[])
{
	int ret;

	ret = hello();
	printf("hello() wrote %d symbols\n", ret);

	return 0;
}