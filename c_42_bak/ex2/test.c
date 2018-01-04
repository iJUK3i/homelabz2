#include <stdio.h>
#include <time.h>
#include <stdlib.h>


enum { arr_len = 100 };

int main()
{
	int i,
		*pNum = malloc(arr_len * sizeof(int));

	if (pNum == NULL)
	{
		fprintf(stderr, "Insufficient Memory!\n");
		exit(1);
	}

	srand( (unsigned)time(NULL) );

	for ( i = 0; i < arr_len; ++i )
		pNum[i] = rand() % 10000;

	printf("\n%d random numbers between 0 and 9999:\n", arr_len );
	for ( i=0; i < arr_len; ++i )
	{
		printf("%6d", pNum[i]);
		if (i % 10 == 9) putchar('\n');
	}
	printf("\n");
	printf("%6d", pNum[1]);
	printf("\n");
	free(pNum);
	return 0;
}
