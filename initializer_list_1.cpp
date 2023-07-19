#include <initializer_list> // for std::initializer_list
#include <iostream>

class Foo
{
public:
	Foo(int, int)
	{
		std::cout << "Foo(int, int)" << '\n';
	}
};

int main()
{
	Foo f1{ 1, 2 }; // calls Foo(int, int)

	return 0;
}