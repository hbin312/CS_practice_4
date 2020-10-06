#include "Header.h"
#pragma warning (disable:4996)

void Calculate(int N_page, int *counts)
{
	int i, tmp;
	for (i = 1; i < N_page + 1; i++) {
		tmp = i;
		while (tmp)
		{
			counts[tmp % 10] += 1;
			tmp /= 10;
		}
	}
	for (int x = 0; x < 10; x++) {
		printf("%d ", counts[x]);
		counts[x] = 0;
	}
	printf("\n");
}
