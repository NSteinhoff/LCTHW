#include <stdio.h>

/* This is a comment. */
int main(int argc, char *argv[])
{
    int distance = 100;

    printf("Arguments:\n");
    for (int i=0; i<argc; i++) {
        char *fmt = "    %d: \"%s\"\n";
        printf(fmt, i+1, argv[i]);
    }


    // this is also a comment
    printf("Hello, World!\nYou are %d miles away.\n", distance);

    return 0;
}
