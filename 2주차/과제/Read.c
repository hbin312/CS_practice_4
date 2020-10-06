#include "Header.h"
#pragma warning (disable:4996)

int Read_Books() {
	int N_Book;
	scanf("%d", &N_Book);
	if (N_Book <= 0) {
		printf("Input error!\n");
		exit(1);
	}
	return N_Book;
}

void Read_pages(int N_Book) {
	int i;
	int N_page;
	int counts[10] = { 0 };
	for (i = 0; i < N_Book; i++) {
		scanf("%d", &N_page);
		if ((0 < N_page) && (N_page <= MAX))
		{
			Calculate(N_page, counts);
		}
		else
		{
			printf("Input error!\n");
			exit(1);
		}
	}
}
