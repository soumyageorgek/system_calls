#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int i;

	i=open("abc",O_RDONLY);
	printf("%d\n",i);
}
/*Minimum value of file descriptor is 3*/	


