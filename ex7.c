#include <stdio.h>

int main(int argc, char *argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.5432;
    char initial = 'A';
    char first_name[] = "Niko";
    char last_name[] = "Steinhoff";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("My first name is %s.\n", first_name);
    printf("My last name is %s.\n", last_name);
    printf("My full name is %s %c. %s.\n",
            first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

    long universe_of_defects = 1L * 1024L * 1024L * 1024L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only %e portion of the universe.\n", part_of_universe);

    // this makes no sense and is just to demonstrate that you can use 'char'
    // in arithmatic
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("That means you should care %d%%.\n", care_percentage);

    return 0;
}
