#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
        printf("current ID: %d, parent ID: %d\n", getpid(), getppid());
        return (0);
        /** getppid returns the same value as echo$$ in the parent process **/
}