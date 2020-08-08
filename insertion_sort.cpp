// O(n^2)
#include <iostream>
#include <random>

int main()
{
	std::random_device random;
	
	auto size = 10;

	int32_t integers[size];

	for(auto &i : integers)
	{
		i = random() % 100000;
		std::cout << i << ' ';
	}
	
	// Insertion sort
	for(auto i = 1; i < size; i++)
	{
		for(auto n = i; n > 0; n--)
		{
			if(integers[n] < integers[n - 1])
			{
				auto buffer = integers[n];
				integers[n] = integers[n - 1];
				integers[n - 1] = buffer;
			}

			else
			{
				break;
			}
		}
	}
	// End of sort

	std::cout << std::endl;

	for(auto i : integers)
	{
		std::cout << i << ' ';
	}
	
	std::cout << std::endl;

	return 0;
}
