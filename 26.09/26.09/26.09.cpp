#include "Header.h"

void Reverse(double a[], int size)
{
	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << a[i];
	}
}

int main()
{
	int size = 5;
	double a[] =  {1,2,3,4,5};

	for (int i = 0; i < size; i++)
	{
		cout << a[i];
	}

	cout << "\n";
	Reverse(a, size);
}
