#include <stdio.h>

#include<locale.h>

int main()

{

	setlocale(LC_ALL, "Rus");

	int n, i, k;

	int A[100];

	float B[100];

	printf("Введите N и массивы A[N] и B[N]\nN=");

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)

	{

		printf("A[%d", i);

		printf("]=");

		scanf_s("%d", &A[i]);

	}

	for (k = 1; k <= n; k++)

	{

		B[k] = 0;

		for (i = 1; i <= k; i++)

			B[k] = B[k] + A[i];

		B[k] = B[k] / k;

	}

	for (i = 1; i <= n; i++)

	{

		printf("\nB[%d", i);

		printf("]=%f", B[i]);

	}

	return 0;

}
