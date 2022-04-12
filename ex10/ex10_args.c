#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	/* must pass at least one argument */
	if(argc < 2) {
		printf("ERROR: You need at least one argument.\n");
		// this is how you abort a program
		return 1;
	}

	int i = 0;
	int j = 0;

	// for each argument
	for (j = 1; j < argc; j++) {
		// for each letter of the argument
		for (i = 0; argv[j][i] != '\0'; i++) {
			char letter = tolower(argv[j][i]);

			switch (letter) {
				case 'a':
					printf("%d: 'A'\n", i);
					break;

				case 'e':
					printf("%d: 'E'\n", i);
					break;

				case 'i':
					printf("%d: 'I'\n", i);
					break;

				case 'o':
					printf("%d: 'O'\n", i);
					break;

				case 'u':
					printf("%d: 'U'\n", i);
					break;

				case 'y':
					if (i > 2) {
						// it's only sometimes Y
						printf("%d: 'Y'\n", i);
					}
					break;

				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
	}

	return 0;
}

