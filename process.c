#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

void main()
{
  pid_t childpid= fork();
  if(childpid==0)
  {
   printf("The child process is created succesfully and is in the child process");
   printf("\nParent id : %d\n",getppid());
   printf("Child id : %d\n",getpid());
  }
  if(childpid>0)
  {
   printf("The child process is created succesfully and is in the parent process");
   printf("\nParent id: %d\n",getpid());
   printf("Child id: %d\n",childpid);
   wait(NULL);
   printf("The child process is terminated and the parent process is changed from its waiting state to running state\n");
  }
  if(childpid<0)
  {
   printf("The child process is not created \n");
  }
  exit(0);
}
