#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
	
	scanf("%d", &i);
	if (i<0){
		printf("i is negative");
	}
	else if (i==0){
		printf("i is zero");
	}
	else if (i>100) {
		printf("i is greater than 100");
	}
	else{
		printf("i is between 1 and 100");
	}		
	
    // write the control structure as described in the exercise
    // and run the code with different values for i

    return 0;
}
