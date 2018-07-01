#include <stdio.h>
#include <stdlib.h>
#include "pngwriter.h"

#define NX 258
#define NY 258

#define DX 0.01
#define DY 0.01

int main(void)
{
    int i, j, error_code;
    double array[NX][NY];
    double laplacian[NX][NY];

    // First initalize the inner values to zero
    for (i = 1; i < NX - 1; i++) {
        for (j = 1; j < NY - 1; j++) {
            array[i][j] = 5.0;
        }
    }

    // Zero out the outer boundary of laplacian
    for (i = 0; i < NX; i++) {
        laplacian[i][0] = laplacian[i][NY - 1] = 0.0;
    }
    for (j = 0; i < NY; j++) {
        laplacian[0][j] = laplacian[NX - 1][j] = 0.0;
    }

    // Initial conditions for top and bottom
    for (i = 0; i < NX; i++) {
        array[i][0] = 85.0;
        array[i][NY - 1] = 5;
    }
    // left and right
    for (j = 0; j < NY; j++) {
        array[0][j] = 20;
        array[NX - 1][j] = 70;
    }

    // Evaluate the Laplacian
    // *INDENT-OFF*
	for (i=1; i < NX - 1; i++) {
	for (j=1; j < NY - 1; j++) {
			laplacian[i][j] =
				((array[i-1][ j ] - 2.0 * array[i][j] + array[i+1][ j ]) / (DX * DX) )
			   +((array[ i ][ j ] - 2.0 * array[i][j] + array[ i ][j+1]) / (DY * DY) );
		}
	}
    // *INDENT-ON*

    // Call the png writer routine

    //error_code = save_png((double *) array, NX, NY, "datastructures_functions_heat-a_b.png", 'c');
    error_code = save_png((double *) laplacian, NX, NY, "datastructures_functions_heat-a_b.png", 'c');



    if (error_code == 0) {
        printf("Wrote the output file datastructures_functions_heat-a_b.png\n");
    } else {
        printf("Error while writing output file datastructures_functions_heat-a_b.png\n");
    }

    return 0;
}
