#include <stdio.h>

void add_one_to_both(int *a, int *b) {
	(*a) += 1;
	(*b) += 1;
}

int main(int argc, char *argv[])
{
    int a, b;
	a = 10;
	b = 20;
	add_one_to_both(&a, &b);
	printf("%d \t %d\n", a, b);
    return 0;
}
