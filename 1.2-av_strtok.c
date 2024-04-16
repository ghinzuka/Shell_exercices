#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *buff = malloc(sizeof 1024);
	size_t len = 1024;
	char *token;

	while (1)
	{
			printf("$ ");
			getline(&buff, &len, stdin);
			printf("buffer if : %s", buff);

			token = strtok(buff, " ");
			while(token != NULL)
			{
				printf( "token:%s\n", token);
				token = strtok(NULL, " ");
			}
			if (getchar () == EOF)
			{
				printf("CTRL + D pressed \n");
				printf("the value of EOF is : %d \n", EOF);
				return (0);
			}
	}
}