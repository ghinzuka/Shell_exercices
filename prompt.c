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
		if (getchar() == EOF)
		{
			printf("CTRL + D pressed \n");
			printf("the value of EOF is : %d \n", EOF);
			return (0);
		}
	}
}