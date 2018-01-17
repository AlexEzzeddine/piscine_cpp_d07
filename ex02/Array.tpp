#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <stdexcept>

template<typename T>
class Array
{
	private:
		T *array;
		unsigned int _size;
	public:
		Array(): _size(0), array(0)
		{
			return;
		}

		Array(unsigned int size): _size(size)
		{
			if(_size == 0)
				array = 0;
			else
				array = new T[_size];
		}

		Array(Array const& obj)
		{
			*this = obj;
			return;
		}

		virtual ~Array()
		{
			delete [] array;
		}

		Array& operator=(Array const& obj)
		{
			if(this == &obj)
				return *this;
			this->_size = obj._size;
			if(this->_size == 0)
				this->array = 0;
			else
			{
				this->array = new T[this->_size];
				memcpy(this->array, obj.array, sizeof(T) * this->_size);
			}
			return *this;
		}

		T& operator[](unsigned int index)
		{
			if(index >= _size)
				throw std::out_of_range("Index out of range");
			return array[index];
		}

		unsigned size()
		{
			return _size;
		}
};

#endif