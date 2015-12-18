#include <stdio.h>

void n_hello_worlds(int n) {
    for (int i = 0; i < n; i += 1) {
	puts("Hello World!");
    }
}

int main(int argc, char** argv) {
    puts("Bonus Marks 1");
    puts("Prompt: Use a for loop to print out 'Hello World!' five times.\n");
    for (int i = 0; i < 5; i += 1) {
	puts("Hello World!");
    }
    puts("\nBonus Marks 2");
    puts("Prompt: Use a while loop to print out 'Hello World!' five times.\n");
    int ii = 0;
    while(ii < 5) {
	puts("Hello World!");
	ii += 1;
    }
    puts("\nBonus Marks 3");
    char * prompt_3 = "Prompt: Declare a function that outputs \
'Hello World!' n times. Call this from main.\n";
    puts(prompt_3);
    n_hello_worlds(1);

    /* 
       Solutions to the rest of the bonus marks lie outside the scope of
       this program.
    */
}
