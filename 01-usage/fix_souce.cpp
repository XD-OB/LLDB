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
		std::cin >> tab[count];                  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
	for ( count = 0; count < MAX ; count++ ) //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		std::cout << "Value [" << count << "] = " << tab[count] << std::endl;
	std::cout << "Average = " << average(tab, MAX) << std::endl;
	std::cout << "MAX = " << max(tab, MAX) << std::endl;
	return 0;
}

double average(int min[], int max)
{
	double tmp;
	tmp = 0.0;
	for (int i = 0; i < max; i++)			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		tmp += min[i];                      //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	tmp /= max;
	return tmp;
}

int max(int min[], int max)
{
	int biggest;
	 biggest = 0;
	for (int i = 0; i < max; i++)			//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		if (biggest <= min[i])
			biggest = min[i];				//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return biggest;
}
