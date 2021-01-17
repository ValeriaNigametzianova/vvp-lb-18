#include <stdio.h>

#include<locale.h>

int main()

{

	setlocale(LC_ALL, "Rus");

	int n, i, k, k1 = 0, t = 0, m;

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

	{
		if (A[i] > k)

		{

			k = A[i];

			k1 = i;

		}
	
		if (A[i] < k)

		{
			m = A[i];
			t = i;
		}
	}

	if (t > k1)

	{

		++k1;

		for (k1; k1 < t; ++k1)

			A[k1] = 0;

	}

	if (t < k1)

	{

		++t;

		for (t; t < k1; ++t)

			A[t] = 0;

	}

	for (i = 1; i <= n; i++)

	{

		printf("\nA[%d", i);

		printf("]=%d", A[i]);

	}

	return 0;

}