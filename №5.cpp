#include <stdio.h>

#include<locale.h>

int main()

{

	setlocale(LC_ALL, "Rus");

	int n, i, k, t;

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

	t = A[1];

	for (i = 2; i <= n; i++)

	{

		if (A[i] < t)

		{

			A[i - 1] = A[i];

			k = i;

		}

	}

	A[k] = t;

	for (i = 1; i <= n; i++)

	{

		printf("\nA[%d", i);

		printf("]=%d", A[i]);

	}

	return 0;

}