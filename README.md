<a href="https://imgflip.com/i/8ypabe"><img src="https://i.imgflip.com/8ypabe.jpg" title="made at imgflip.com"/></a><div></a></div>

# Atlas-simple_shell 🐢🍕

## Description
**Atlas-simple_shell** is a basic terminal shell that allows users to interact with the file system and execute commands. Inspired by the Teenage Mutant Ninja Turtles, it provides a simple command-line interface for listing commands and files, making it easy to navigate your computer's directory like a ninja in the sewers of New York City.

## Installation
To build and use **Atlas-simple_shell**, follow these steps:

1. **Clone the repository:**
 ```sh
git clone https://github.com/yourusername/atlas-simple_shell.git
cd atlas-simple_shell
```

- Compile the shell:
- sh
- Copy code

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c prompt.c execute.c -o hsh 
```

### Usage
- Once compiled, you can start the shell by running:

```sh
Copy code
./hsh
```


### Interactive Mode
- In interactive mode, the shell displays a prompt and waits for you to type a command. It looks like this:

```sh
Copy code
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
### Non-Interactive Mode
You can also use the shell in non-interactive mode by piping commands to it:

```sh
Copy code
echo "/bin/ls" | ./hsh
hsh main.c shell.c
```

Or by redirecting input from a file:

```sh
Copy code
$ cat test_ls_2
/bin/ls
/bin/ls
$ cat test_ls_2 | ./hsh
hsh main.c shell.c
hsh main.c shell.c
```

### How It Works
#### Interactive Mode: When you run ./hsh, it starts in interactive mode, displaying the ($) prompt. You can type commands directly and see the output.

#### Non-Interactive Mode: When commands are piped into ./hsh, it reads and executes them without displaying the prompt.
### Features
- Execute commands: Runs any executable file within your system path.
- Simple prompt: Displays a friendly prompt for input.
- Graceful exit: Handles the exit command and Ctrl+D to terminate the shell.
- Error handling: Reports errors when commands are not found.
### Examples
Here are some example commands you can run in Atlas-simple_shell:

```sh
Copy code
($) /bin/pwd
/home/username/atlas-simple_shell
($) /bin/echo "Cowabunga!"
Cowabunga!
($) /bin/ls -l
total 24
-rw-r--r-- 1 username username 1234 Jul 23 12:34 main.c
-rw-r--r-- 1 username username 5678 Jul 23 12:34 prompt.c
-rw-r--r-- 1 username username 9101 Jul 23 12:34 execute.c
($) exit
```
### Built-in Commands
The following built-in commands are available in Atlas-simple_shell:

- exit: Exit the shell.
### Project Structure
- The project contains the following files:

- main.c: Contains the main loop of the shell, reading input and handling the execution of commands.

- prompt.c: Contains the function that displays the shell prompt.

- execute.c: Contains the function that executes the given commands.
- shell.h: Header file containing necessary includes and function prototypes.
### Contributing
If you'd like to contribute to this project (we love help from fellow ninjas!), please fork the repository and submit a pull request. Contributions can include:

- Bug fixes
- New features
- Improved documentation
- Code optimization
### License
This project is licensed under the MIT License. See the LICENSE file for more details.

### Acknowledgments
Teenage Mutant Ninja Turtles: For their endless inspiration.
Open-source community: For their invaluable resources and support.
You: For using and contributing to Atlas-simple_shell.
Cowabunga, dude! 🐢🍕

### Authors
- John Wilson
- Khiry Dixon-Manning