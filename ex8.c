# include <stdio.h>


int main(int argc, char*argv[]) {
    int nargs = argc - 1;
    if (nargs == 0) {
        printf("You have no arguments.\n");
    } else if (nargs == 0) {
        printf("You have one argument: %s.\n", argv[1]);
    } else if (nargs > 1 && nargs <= 3) {
        printf("You have multiple arguments:\n");
        for (int i = 1; i < argc; i++) {
            printf(" > %s\n", argv[i]);
        }
    } else {
        printf("%d arguments is too much!\n", nargs);
    }

    return 0;
}
