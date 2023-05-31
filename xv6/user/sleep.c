#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void
night(int s)
{
	sleep(s*10);
}

int
main(int argc, char *argv[])
{
	if (argc != 2){
		printf("usage: sleep num_seconds\n");
		exit(1);
	}

	if (atoi(argv[1]) < 1){
		printf("must sleep for at least one second!\nusage: sleep num_seconds\n");
		exit(1);	
	}

	night(atoi(argv[1]));
	return 0;
}
