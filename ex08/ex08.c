#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 1) {
		printf("This program expects at least 1 argument to work properly.\n");
	} else if (argc == 2){
		printf("You only have 1 argument. You suck.\n");
	} else if (argc > 1 && argc < 4) {
		printf("Here's your arguments:\n");
		
		for (i = 1; i < argc; i++) {
			printf("%s ", argv[i]);
		}
	} else {
		printf("You have too many arguments. You suck.\n");
	}

	return 0;
}
