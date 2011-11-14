#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int i=0;

	while(open("abc",O_RDONLY)!=-1)
		i++;
	printf("%d\n",i);
}
/*Maximum value of file descriptor is 1021*/
