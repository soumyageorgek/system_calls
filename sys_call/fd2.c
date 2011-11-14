#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int i;
	char buf[20]={'a','b','c','\0'};

	i=write(2,(void*)buf,10);
	buf[i]='\0';
	if(i==-1)
		printf("Error");
}
/*When we run the program,the stored value abc gets printed in standard output */
