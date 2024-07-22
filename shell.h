#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <termios.h>

#define LIMIT 256 /* Max number of tokens for a command */
#define MAXLINE 1024 /* Max number of characters from user input */

/* Global variables */
extern pid_t GBSH_PID;
extern pid_t GBSH_PGID;
extern struct termios GBSH_TMODES;
extern int GBSH_IS_INTERACTIVE;
extern char *currentDirectory;
extern int numTokens;
extern int no_reprint_prmpt;

/* Command struct */
typedef struct Command {
    char *args[LIMIT];
    char *inputFile;
    char *outputFile;
    int background;
    struct Command *next;
    struct Command *prev;
} Command;

/* Function prototypes */
void init();
void welcome_screen();
void signal_handler_child(int p);
void signal_handler_int(int p);
void shell_prompt();
int change_directory(char* args[]);
int manage_environ(char * args[], int option);
void launch_prog(Command *cmd);
void file_io(Command *cmd, int option);
int command_handler(Command *cmd);
void tokenize(char *line, Command *cmd);
void add_history(Command *cmd);
void print_history();
void free_command(Command *cmd);
void handle_sequence(Command *cmd);
void waitpid_wrapper(pid_t pid, int *status, int options);
void wait_child_processes();

#endif /* SHELL_H */

