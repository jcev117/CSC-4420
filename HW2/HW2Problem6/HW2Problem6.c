#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

  int pid =fork();

  printf("Current process id: %d",getpid());
  int parentID=getppid();

  while(parentID>1)
  {

printf("/proc/%d/status",parentID);


  }

return 0;
}
