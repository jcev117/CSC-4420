#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#define SHELL "/bin/sh"

int
my_system(const char *command)
{
    pid_t pid;

    pid =fork ();

    if(pid==0)
    {

        printf("Parent process ID before terminated: %d", getppid());


    }
}