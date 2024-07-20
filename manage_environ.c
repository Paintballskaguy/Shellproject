#include "shell.h"

extern char **environ;

/**
 * manage_environ - Manage environment variables
 * @args: Arguments passed to the command
 * @option: Option to manage environment (0: print, 1: set, 2: unset)
 *
 * Return: 0 on success, -1 on failure
 */

int manage_environ(char *args[], int option)
{
	char **env_aux;

	switch (option)
	{
	case 0:
		for (env_aux = environ; *env_aux != 0; env_aux++)
		{
			printf("%s\n", *env_aux);
		}
		break;
	case 1:
		if ((args[1] == NULL) && args[2] == NULL)
		{
			printf("%s", "Not enough input arguments\n");
			return (-1);
		}

		if (getenv(args[1]) != NULL)
		{
			printf("%s", "The variable has been overwritten\n");
		}
		else
		{
			printf("%s", "The variable has been created\n");
		}

		if (args[2] == NULL)
		{
			setenv(args[1], "", 1);
		}
		else
		{
			setenv(args[1], args[2], 1);
		}
		break;
	case 2:
		if (args[1] == NULL)
		{
			printf("%s", "Not enough input arguments\n");
			return (-1);
		}
		if (getenv(args[1]) != NULL)
		{
			unsetenv(args[1]);
			printf("%s", "The variable has been erased\n");
		}
		else
		{
			printf("%s", "The variable does not exist\n");
		}
		break;
	}
	return (0);
}
