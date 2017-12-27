#include <stdio.h>


void crash()
{
    char *test = NULL;

    for (int i = 0; i < 100000; i++) {
        printf("%d", test[i]);
    }
}


int main()
{
    crash();

    return 0;
}
