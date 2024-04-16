#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *buff = malloc(sizeof 512);
	size_t len = 512;

	while (1)
	{
		printf("$ ");
		getline(&buff, &len, stdin);
		printf("%s", buff);
	}
	return (0);
}