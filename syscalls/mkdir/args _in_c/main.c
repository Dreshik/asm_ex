#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
int my_mkdir();

int main(int argc, char const *argv[])
{
	const char dir_names[2][256] = {"dir_maked_by_mkdir", "dir_maked_by_my_mkdir"};
	int ret;

	ret = mkdir(dir_names[0], 0777);
	if (ret)
		perror("can't do mkdir()");

	ret = my_mkdir(dir_names[1], 0777);
	if (ret)
		perror("can't do my_mkdir()");

	return 0;
}