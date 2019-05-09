#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/times.h>
#include <time.h>

int main()
{
  struct tms start_cpu;
  struct tms finish_cpu;
  double cpu_time; 
  __clock_t start = times(&start_cpu);
  int j=0;
  int MAX=9000000;

  if(fork==0)

  {
  for(int i=0;i<MAX;i++)
  {
  j+=i;

  }

  }
 else
 {
   {
     clock_t finish = times(&finish_cpu);

    printf("CPU Time: %f",cpu_time =((double)(finish-start))/sysconf(_SC_CLK_TCK)); 
   }
 }
 
  



  return 0;
}