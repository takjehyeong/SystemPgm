#include <unistd.h>

main(int argc, char *argv[ ])
{
	int unlink( );

	if (unlink(argv[1]) == -1){
		perror(argv[1]);
		exit(1);
	}

	exit(0);
}
