#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int fd,l1,n;
	char buf[20];

	n=fork();
	if(n==0){
		sleep(2);
		printf("Child\n");
		l1=lseek(fd,0,SEEK_CUR);
		printf("offset in child is %d\n",l1);
	}
	else{
		fd=open("abc",O_RDONLY);
		printf("Parent\n");
		l1=lseek(fd,5,SEEK_CUR);
		printf("In parent changed %d\n",l1);
		sleep(4);
	}
}
/*Only the file descriptor opened before calling getting shared*/

		
		
		

