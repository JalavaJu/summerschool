#include <stdio.h>

int main(int argc, char *argv[])
{
	int integer = 5;
	float floater = 5.5;
	double doubles = 6.5;
// declare integers, floats, and doubles


    // evaluate expressions, e.g. c = a + 2.5 * b
	doubles = integer + 2.5 * floater;
    // and print out results. Try to combine integers, floats
	printf("Tulos on: %f\n", doubles);
    // and doubles and investigate what happens in type conversions

    return 0;
}
