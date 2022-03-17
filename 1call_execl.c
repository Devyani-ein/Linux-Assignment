#include<stdio.h>
#include<unistd.h>

int main()
{
	execl("linux_internals_assignment/process_assignment/1_exce_fd", "./1_exce_fd" , 0);

	return 0;
}