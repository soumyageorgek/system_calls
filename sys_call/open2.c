#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
main()
{
	int fd1, fd2, l;

	fd1 = open("abc", O_RDONLY);
	fd2 = open("abc", O_RDONLY);
	l = lseek(fd1,5,SEEK_CUR);
	printf("fd1 offset changed %d\n",l);
	l = lseek(fd2,0,SEEK_CUR);
	printf("fd2 offset is %d\n",l);
	printf("%d %d\n",fd1,fd2);

}
/*Opening a file again gives a different file descriptor value.Changes made in one file descriptor keeps the other uneffected

They maintain different offset values.They are entirely different entities.*/	


/*fd1 offset changed 5
fd2 offset is 0
3 4*/
