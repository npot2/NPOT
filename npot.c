#include <stdio.h>
#include <stdlib.h>

int npot(int n);

int main(int argc, char *argv[]) 
{
	int n;
	
    if (argc != 2) {
        printf("Invalid input\n");
		return 0;
    }
	
	n = atoi(*(argv + 1));
	
	if (npot(n)) {
		printf("%d is NPOT\n", n);
	} else {
		printf("%d is POT\n", n);
	}
	
	return 0;
}


int npot(int n)
{
	if (n < 0) return 1;
	return (n & (n - 1));
}

