#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * @brief print all arguments without using argc
 * 
 */

int main(int argc, char *argv[])
{

        char **ptrChr_str = NULL;

        for (ptrChr_str = argv; *ptrChr_str != NULL; ptrChr_str++)
        {
                printf("%s\n", *ptrChr_str);
        }
  
        return (0);
}