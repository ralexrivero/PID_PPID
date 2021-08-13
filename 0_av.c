#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * @brief 
 * 
 * @param argv point to array of arguments given
 * @return int 
 */
int main(__attribute__((unused))int argc, char *argv[])
{
        int i = 0, j = 0;
        char *varChr_str2 = NULL, *varChr_str3 = NULL;

        varChr_str2 = strdup(argv);
        varChr_str3 = strtok(varChr_str2, " ");
        while (varChr_str3 != NULL)
        {
                varChr_str3 = strtok(NULL, " ");
                printf("%d\n", i);
                printf("%s\n", argv[i]);
                i++;
                
        }
        

        
        return (0);
}