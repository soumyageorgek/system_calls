//Demonstrate the working of the "close" system call. What would happen if you try to read from a file descriptor which has been closed
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int fd1,r;
	char buf[30];
//Successfull read after opening a file and returning number of bytes read.
/*If a read requested for a greater number of bytes ie,greater than actually in the file,return
value is the greatest read byte count*/
	fd1=open("abc",O_RDWR);
	r=read(fd1,(void *)buf,10);
	buf[10]='\0';
	printf("%s and return value %d\n",(char *)buf,r);
//Closing file and checking what happens
	close(fd1);
	r=read(fd1,(void *)buf,10);
	if(r==-1)
		perror("cannot be read\n");
//read returns -1 indicating an unsuccessfull read
}
