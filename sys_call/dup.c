//Demonstrate the working of the "dup" system call
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
main()
{
	int fd1,fd2,count;
//checking whether same value retained in duplicate	
	fd1=open("abc",O_RDONLY);
	count=lseek(fd1,5,SEEK_CUR);
	printf("count in fd1 is %d\n",count);
	fd2=dup(fd1);
	count=lseek(fd2,0,SEEK_CUR);
	printf("count in duplicate is %d\n",count);

//checking changes in dup affects original 
	count=lseek(fd2,5,SEEK_CUR);
	printf("count added 5 in duplicate %d\n",count);
	count=lseek(fd1,0,SEEK_CUR);
	printf("count in original is %d\n",count);
	printf("%d %d",fd1,fd2);
}
/*In the duplicate the offset gets saved the same.But it gets a different file descriptor value.After creating duplicate changes made in duplicate affects the original.Using a duplicate is similar to using an alias.*/
	
/*Output is
count in fd1 is 5
count in duplicate is 5
count added 5 in duplicate 10
count in original is 10
3 4*/
