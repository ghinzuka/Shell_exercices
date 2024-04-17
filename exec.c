#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argpath = "/bin/ls";
    char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

    printf("Before execve\n");
    if (execve(argpath, argv, NULL) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}