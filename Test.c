#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a = 0, b = 0;
	srand((int)time(NULL));
	a = rand();
	b = rand();

	printf("%d\n", a + b);
	return 0;
}
