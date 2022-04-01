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
	int x = 6;
	int y = 0;
	int z;

	switch (signum)
	{
	case SIGCHLD:
		cout << "received SIGCHLD\n"
			 << endl;
		fflush(stdout);
		z = x / y;

	case SIGFPE:
		cout << "received SIGFPE\n"
			 << endl;
		fflush(stdout);
		abort();
		cout << "Press ^C\n"
			 << endl;
			 sleep(10);
			 cout << "\n" <<endl;
	case SIGABRT:
		cout << "received SIGABRT\n"
			 << endl;
		fflush(stdout);
		alarm(3);

	case SIGALRM:
		cout << "received SIGALRM\n"
			 << endl;
		fflush(stdout);
		raise(SIGUSR1);

	case SIGUSR1:
		cout << "received SIGUSR1\n" <<endl;
		
		fflush(stdout);
		//system("lsd"); //instead ls
		cout << "\n"<< endl;
		exit(1);
	
	// // case SIGILL:
	// // cout << "received SIGILL\n" <<endl;
	// // 	fflush(stdout);
	// // 	//exit(1);
	// // 	system("^C");
	
	// case SIGTERM:
	// 	cout << "received SIGTERM\n" <<endl;
	// 	fflush(stdout);
	// 	exit(1);

	default :
		exit(1);
}}

int main()
{
	int status;
	signal(SIGCHLD, handler);
	signal(SIGFPE, handler);
	signal(SIGABRT, handler);
	signal(SIGALRM, handler);
	signal(SIGUSR1, handler);
	// signal(SIGILL, handler);
	// signal(SIGTERM, handler);
	
	
	

	if (!(fork()))
	{
		exit(1);
	}
	wait(&status);
	return 0;
}