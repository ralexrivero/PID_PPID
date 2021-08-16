#include "shell.h"

int main(void)
{
        pid_t child_pid;
        int i = 0;
        
        

        if (child_pid == -1)
        {
                perror("Error:");
                return (1);
        }
        for (; i < 5; i++)
        {
                child_pid = fork();
                if (child_pid == 0)
                {
                        execv("/bin/ls", "-l /tmp");
                        return (0);
                        }
        }
        return (0);
}