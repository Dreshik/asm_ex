#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int my_mkdir();

int main(int argc, char const *argv[])
{
	const char dir_name[] = "dir_maked_by_mkdir";
	int ret;

	ret = mkdir(dir_name, 0777);
	if (ret)
		perror("can't do mkdir()");

	ret = my_mkdir();
	if (ret)
		perror("can't do my_mkdir()");

	return 0;
}