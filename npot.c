#include <stdio.h>
#include <stdlib.h>

int npot(int n);
int npof(int n);

int npot(int n)
{
	if (n < 0) return 1;
	return (n & (n - 1));
}

int npof(int n)
{
	if (n < 0) return 1;
	// 0xAAAAAAAA = 0b10101010101010101010101010101010
	return ((n & (n - 1)) || (n & 0xAAAAAAAA));
}

int main(int argc, char *argv[]) 
{
	int n;
	
    if (argc != 2) {
        printf("Invalid input\n");
		return 0;
    }
	
	n = atoi(*(argv + 1));
	
	printf("%d is ", n);
	if (npot(n)) {
		printf("NPOT");
	} else {
		printf("POT");
	}
	
	printf(", ");
	if (npof(n)) {
		printf("NPOF");
	} else {
		printf("POF");
	}
	
	printf("\n");
	return 0;
}
