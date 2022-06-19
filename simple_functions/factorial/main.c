#include <stdio.h>
#include <inttypes.h>

uint64_t factorial(uint64_t val);

int main(int argc, char const *argv[])
{
	uint64_t result;
	uint64_t val = 15;

	result = factorial(val);
	printf("%" PRIu64 "! = %" PRIu64 "\n",val, result);

	return 0;
}