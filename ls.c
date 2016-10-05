#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main( void )
{
    int status;
    char *args[2];

    args[0] = "/bin/ls";        // first arg is the full path to the executable
    args[1] = NULL;             // list of args must be NULL terminated
    printf("Sos un corneta date cuenta guampaaaaaa\n\n");
    if ( fork() == 0 )
        execv( args[0], args ); // child: call execv with the path and the args
    else
        wait( &status );        // parent: wait for the child (not really necessary)

    return 0;
}
