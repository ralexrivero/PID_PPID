#include "shell.h"

/**
 * @brief prints "$ ", wait for the user to enter a command, prints it on the next line.
 * man 3 getline
 * stop reading Keyword: “end-of-file”, or EOF (or Ctrl+D).
 */

int main(void)
{
        ssize_t varSST_read = 0;
        size_t varSTp_read_bytes = 0;
        char * varChr_str = NULL;
        /* asign 0 and NULL to make getline reserve the right ammount of memory */

        write(1, "$ ", 2);

        varSTp_read_bytes = getline( &varChr_str, &varSST_read, stdin );

        write(1, varChr_str, varSST_read);
        
        free(varChr_str);

        return (0);
}