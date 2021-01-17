
#include <stdio.h>

#include<locale.h>

int main()

{

	setlocale(LC_ALL, "Rus");

	int n, i, j;

	int A[100], B[100];

	printf("Введите N и массивы A[N] и B[N]\nN=");

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)

	{

		printf("A[%d", i);

		printf("]=");

		scanf_s("%d", &A[i]);

	}

	for (i = 1; i <= n; i++)

	{

		printf("B[%d", i);

		printf("]=");

		scanf_s("%d", &B[i]);

	}

	for (i = 1; i <= n; i++)

	{

		j = A[i];

		A[i] = B[i];

		B[i] = j;

	}

	printf("Новые массивы");

	for (i = 1; i <= n; i++)

	{

		printf("\nA[%d", i);

		printf("]=%d", A[i]);

	}
	printf("\n");

	for (i = 1; i <= n; i++)

	{

		printf("\nB[%d", i);

		printf("]=%d", B[i]);

	}

	return 0;

}