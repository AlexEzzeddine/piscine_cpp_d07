#include "Array.tpp"
#include <iostream>

int main()
{
	Array<int> empty_arr(0);
	std::cout << "Empty array size: " << empty_arr.size() << std::endl;

	Array<int> arr(5);
	try
	{
		for (size_t i = 0; i < arr.size() + 5; ++i)
		{
			arr[i] = static_cast<int>(i);
			std::cout << arr[i] << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}