#include <iostream>
#define MAX 3

double average(int min[], int max);
int max(int min[], int max);

int main(void)
{
	int		tab[MAX];
	int		count;

	std::cout << "3 numbers: " << std::endl;
	for ( count = 0; count < MAX ; count++ )
	{
		std::cout << "Next number : ";
		std::cin >> tab[1];  		                // tab[count]
	}
	for ( count = 1; count < MAX ; count++ )		// count = 0;
		std::cout << "Value [" << count << "] = " << tab[count] << std::endl;
	std::cout << "Average = " << average(tab, MAX) << std::endl;
	std::cout << "MAX = " << max(tab, MAX) << std::endl;
	return 0;
}

double average(int min[], int max)
{
	double tmp;

	tmp = 0.0;
	for (int i = 0; i > max; i++)			// i < max
		tmp += min[0];                      // min[i]
	tmp /= max;
	return tmp;
}

int max(int min[], int max)
{
	int biggest;

	biggest = 0;
	for (int i = 1; i < max; i++)			// i = 0
		if (biggest <= min[i])
			biggest = min[0];				// min[i]
	return biggest;
}
