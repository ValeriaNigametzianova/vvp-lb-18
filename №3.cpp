#include <stdio.h>

#include<locale.h>

int main()

{

	setlocale(LC_ALL, "Rus");

	int n, i, k;

	int A[100];

	k = 0;

	printf("Введите N и массив A[N]\nN=");

	scanf_s("%d", &n);

	for (i = 1; i <= n; i++)

	{

		printf("A[%d", i);

		printf("]=");

		scanf_s("%d", &A[i]);

	}

	for (i = 1; i <= n; i++)

		if (A[i] % 2 != 0)

			k = A[i];

	for (i = 1; i <= n; i++)

	{

		if (A[i] % 2 != 0)

			A[i] = A[i] + k;

		printf("\nA[%d", i);

		printf("]=%d", A[i]);

	}

	return 0;

}