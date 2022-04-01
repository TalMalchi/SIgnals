#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <iostream>
using namespace std;

void handler(int signum)
{
	int x=6;
	int y=0;
	int z;

    switch(signum){
		case SIGCHLD:
			cout << "received SIGCHLD\n" << endl;
			fflush(stdout);
			z= x/6;
		case SIGFPE:
			cout << "received SIGFPE\n" << endl;
			fflush(stdout);
			cout << "Press ^C\n" << endl;
		case SIGTERM:
			cout << "received SIGTERM\n" << endl;
			fflush(stdout);
			alarm(3);

		case SIGALRM:
			cout << "received SIGTERM\n" << endl;
			fflush(stdout);
			exit(1);
		
		//case SIGCHLD:
		
	}
}
	
	


int main()
{
	int status;
	signal (SIGCHLD, handler);
	signal (SIGFPE, handler);
	signal (SIGUSR1, handler);
    signal(SIGINT, handler);
    signal(SIGTERM, handler);
    signal(SIGKILL, handler); 
	signal(SIGALRM, handler);

	if (!(fork())) {
		exit(1);
	}
	wait(&status);
return 0; 
}