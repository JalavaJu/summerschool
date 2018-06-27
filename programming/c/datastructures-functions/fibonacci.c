#include <stdio.h>

int main(int argc, char *argv[])
{
    // declare array and loop variable
    int f[20];
    int i=0;

    // initialize necessary array elements and write the for loop
	int luku = 1;
	f[0] = 1;
	f[1] = 1;
	for (i=2; i<20; i++) {
		f[i]=f[i-1]+luku;
		luku=f[i-1];
		
	}
    printf("First 20 Fibonacci numbers are:\n");
    for (i = 0; i < 20; i++) {
        printf("%d\n ", f[i]);
    }

    printf("\n");

    return 0;
}
