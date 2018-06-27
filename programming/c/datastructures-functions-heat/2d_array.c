#include <stdio.h>
#include <stdlib.h>

#define NX 258
#define NY 258

int main(void)
{
    int i, j;
    // Add here the definition for array with name 'array'
    // of size NX times NY (258x258)
	int matrix[258][258];

    // Initialize first the zeros
	for (i=0; i<258; i++) {
		for (j=0; j<258; j++) {
			matrix[i][j]=0;	
		}
	}	
    // Initial conditions for left and right
	// Set left boundary:
	for (j=0; j<258; j++) {
		matrix[0][j] = 20;	
	}	
	// Set right boundary:
	for (j=0; j<258; j++) {
		matrix[257][j]=70;
	}	
    // and top and bottom boundaries
	// Top boundary:	
	for (j=0; j<258; j++) {
		matrix[i][0] = 85;
	}

	// Bottom boundary;
	for (j=0; j<258; j++) {
		matrix[i][257] = 5;
	}
	for (i=0; i<258; i++) {
		for (j=0; j<258; j++) {
			printf("%d", matrix[i][j]);	
			if (j==257){
				printf("\n");
			}
		}
	}	

    return 0;
}
