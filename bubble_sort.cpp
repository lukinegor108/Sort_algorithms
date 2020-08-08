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


	// Bubble sort
	for(auto i = 0; i < size; i++)
	{
		for(auto j = 0; j < size - 1; j++)
		{
			if(integers[j] > integers[j + 1])
			{
				auto buffer = integers[j];
				integers[j] = integers[j + 1];
				integers[j + 1] = buffer;
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
