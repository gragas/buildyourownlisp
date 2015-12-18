#include <stdio.h>
#include <stdlib.h>

/* If we are compiling on Windows compile these functions */
#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake readline function */
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

/* Fake add_history function */
void add_history(char* unused) {}

/* Otherwise include the editline headers */
#else
#include <editline/readline.h>
#include <editline/history.h>
#endif

/* Declare a buffer for user input of size 2048 */
// static char input[2048];

int main(int argc, char** argv) {

    /* Print version and exit information */
    puts("Lispy Version 0.0.0.0.1");
    puts("C-c to exit.\n");

    /* Bonus Marks 3 */
    // puts("YOLO\n");

    /* In a never-ending loop */
    while (1) {

	/* Output our prompt */
	// fputs("lispy> ", stdout);

	/* Read a line of user input of maximum size 2048 */
	// fgets(input, 2048, stdin);

	/* Output our prompt and get input */
	char * input = readline("lispy> ");

	/* Bonus Marks 1 */
	// char * input = readline("something of your choice> ");

	/* Add input to history */
	add_history(input);

	/* Echo input back to user */
	printf("No you're a %s\n", input);

	/* Bonus Marks 2 */
	// printf("No you're a %s\n", "hello world");

	/* 
	   Solutions to the rest of the bonus marks lie outside the scope of
	   this program.
	*/

	free(input);
   }

    return 0;
}
