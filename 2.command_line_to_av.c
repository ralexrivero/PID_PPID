#include "shell.h"

int main(void)
{
        char str[] = "hello i am   introducing some text here";
        char delim [] = " ";
        char* piece;
        char** tokens;
        int i = 0;

        
        printf("\33[1;36mBefore tokenize: \33[0m\"%s\"\n", str);
        printf("\33[1;36mThe tokens:\33[0m \n");
        piece = strtok(str, delim);
        tokens[i] = malloc(sizeof(piece));

        while (piece != NULL)
        {
        tokens[i] = malloc(sizeof(piece));
        strcpy(tokens[i], piece);
        printf("\33[0;33m%s\33[0m\n", tokens[i]);
        printf("%s\n", piece);
        piece = strtok(NULL, delim);
        i++;
        }
        printf("\33[1;36mAfter tokenize: \33[0m\"%s\"\n", str);


        for (i = 0; i < strlen(tokens); i++)
        printf("\33[0;32mThe tokens: %s\33[0m\n", tokens[i]);
        return (0);
}