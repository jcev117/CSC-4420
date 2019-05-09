#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main()
{
      

   int pid =fork();

    if(pid==0)
    {

        printf("Parent process ID to child %d before terminated: %d", getpid(),getppid());
        printf("\n")
        sleep(1);
        printf("Parent process ID to child %d before terminated: %d", getpid(),getppid());
    exit;


    }
   
    

    return 0;
}