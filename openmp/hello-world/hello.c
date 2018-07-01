#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello world!\n");
	int omp_rank;
    #pragma omp parallel
    {
		omp_rank = omp_get_thread_num();
        printf("Hello World! by thread %d\n", omp_rank);
    }

    return 0;
}
