#include "shell.h"

int main(void)
{
/* fork declaration */
        pid_t child_pid;
        int status;
        int i = 0;
/* execve declaration */
        char cmd[] = "/usr/bin/ls";
        char * argv[] = {"ls", "-l", "/tmp", NULL};
        char * argenv[] = {NULL};

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
                        if (execve(cmd, argv, argenv) == -1)
                        {
                                perror("Could not execute execve");
                                }
                        }
                else if (child_pid > 0)
                        wait(&status);
        }
        return (0);
}