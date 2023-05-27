#include "main.h"

/**
 * build_path - builds the path to a command
 * @token: token from the PATH environment variable
 * @command: command to execute
 * Return: path to the command
 */
char *build_path(char *token, char *command)
{
    
    int token_len = _strlen(token);
    int command_len = _strlen(command);
    char *path = malloc(sizeof(char) * (token_len + command_len + 2));

    if (path == NULL)
    {   
        free(path);
        return (NULL);
    }

    path = _strcat(path, token);
    path = _strcat(path, "/");
    path = _strcat(path, command);
    

    return (path);
}