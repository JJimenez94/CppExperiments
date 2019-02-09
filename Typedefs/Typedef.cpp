#include <iostream>
#include <array>

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
	/* A typedef is an alias that can be used instead of whatever type, it was thinked by set up aliases of		*
	* "hard to write" types (see: http://en.cppreference.com/w/cpp/language/typedef)							*/

	cout << "Let's use an array as example to our typedef" << endl;
	typedef array <int, 1> intArr_1;
	cout << "so since this moment i haven't to write array <int, 1> foo"
		<< " to define a foo array of one int" << endl
		<< " instead i just have to say intArr_1 and do the same" << endl;

	array <int, 1> dummyArr1 = { 1 };
	intArr_1 dummyArr2 = { 1 };

	cout << "let's test this!" << endl;
	printArrayContent(dummyArr1);
	printArrayContent(dummyArr2);

	return 0;
}