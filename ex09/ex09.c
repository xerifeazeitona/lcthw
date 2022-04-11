#include <stdio.h>

int main(int argc, char *argv[])
{
	/* count from 0 to 25 */
	int i = 0;
	while (i <= 25) {
		printf("%d ", i);
		i++;
	}

	printf("\n");

	/* count from 25 to 0 */
	i = 25;
	while (i >= 0) {
		printf("%d ", i);
		i--;
	}

	return 0;
}
