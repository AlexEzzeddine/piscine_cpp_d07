#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void (*func)(T const&))
{
	if(!arr)
		return;
	for(size_t i = 0; i < len; i++)
		func(arr[i]);
}

template<typename T>
void print(T const& obj)
{
	std::cout << obj << std::endl;
}

int main()
{
	int arrInt[] = {42, 123, 543, 423, 98};
	std::string arrString[] = {"ok", "Yes", "Hey", "Yeah", "HO"};

	std::cout << "Array String: "<< std::endl;
	iter(arrString, 5, print);
	std::cout << std::endl;

	std::cout << "Array Int: "<< std::endl;
	iter(arrInt, 5, print);
	std::cout << std::endl;
}