// O(n^2)
// Better than bubble and insertion
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

	// Cocktail sort
	bool is_sorted = false;
	auto end = size - 1;
	auto start = 0;
	
	while(!is_sorted)
	{
		is_sorted = true;
		
		for(auto i = start; i < end; i++)
		{
			if(integers[i] > integers[i + 1])
			{
				auto buffer = integers[i];
				integers[i] = integers[i + 1];
				integers[i + 1] = buffer;

				is_sorted = false;
			}	
		}

		end--;

		if(is_sorted)
		{
			break;
		}

		for(auto i = end; i > start; i--)
		{
			if(integers[i] < integers[i - 1])
			{
				auto buffer = integers[i - 1];
				integers[i - 1] = integers[i];
				integers[i] = buffer;
			}

			is_sorted = false;
		}

		start++;

		if(is_sorted)
		{
			break;
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
