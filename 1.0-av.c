#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}