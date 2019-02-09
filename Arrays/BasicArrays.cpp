#include <array>
#include <iostream>
#include <string>

using namespace std;

template<typename T, size_t N>
void printArrayContent(const std::array<T, N> &localArray)
{
	if (!localArray.empty())
	{
		cout << "Printing the elements of the array: ";
		for (auto iterator : localArray)
		{
			cout << iterator << " - ";
		}
	}
	else
	{
		cout << "Sorry your array is empty";
	}
	cout << endl;
}

int main() {
	/* std::array is a container that encapsulates fixed size C-style arrays [], this adds some extra functions *
	* (see: http://en.cppreference.com/w/cpp/container/array) like iterators, knowing it's own size, etc		*
	* (see: http://www.learncpp.com/cpp-tutorial/6-15-an-introduction-to-stdarray/)								*/

	array <string, 3> strArr1 = { "x", "a", "b" };
	array <string, 3> strArr2;
	array <int, 3> intArr1 = { 3, 2, 1 };
	array <int, 3> intArr2;
	cout << "Let's print what holds all those arrays" << endl;
	printArrayContent(strArr1);
	printArrayContent(strArr2);
	printArrayContent(intArr1);
	printArrayContent(intArr2);
	cout << "Now that we see some empty arrays, let's fill it" << endl;
	strArr2.at(0) = "Hola!";	
	strArr2.at(8) = "Prueba...";
	printArrayContent(strArr2);
	intArr2.at(1) = 2;
	printArrayContent(strArr2);
	return 0;
}