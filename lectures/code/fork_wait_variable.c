#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
printf("Current process ID is: %d\n", (int)getpid());
int rc = fork();
int x = 100;
if (rc <0)
    {
    printf("Fork failed");
    }
else if (rc ==0)
    {
    // Child Process
    printf("Child: Current process ID is: %d\n", (int)getpid());
    x = 50;
    }
else
   {
   while(x!=50) {sleep(1);}
   printf("Parent of %d is %d\n", rc, (int) getpid());
   //sleep(50);
   }
}


