#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int i;
	char buf[20];

	i=read(0,(void*)buf,10);
	buf[i]='\0';
	if(i==-1)
		printf("Error");
	else
		printf("stored %s and return value is %d\n",(char *)buf,i);
}
/*When we run the program,the cursor waits for an input.After that when press enter read value printed to screen.Pressing an enter stops reading values.*/
