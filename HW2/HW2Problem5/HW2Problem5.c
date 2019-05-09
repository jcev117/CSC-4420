#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

  int pid =fork();

  printf("Current process id: %d\n",getpid());
  int parentID=getppid();

  while(parentID>1)
  {

system("cat /proc/$ppid/status \n");

 break;

  }

return 0;
}