#include <iostream>
#include <string>

using namespace std;

struct person {
	int age;
	string fullName;
private:
	int dummyInt;

public:
	void whatsMyName()
	{
		cout << fullName << endl;
	}
	void whatsMyAge()
	{
		cout << age << endl;
	}
	void whatsDummyInt()
	{
		cout << dummyInt << endl;
	}
	void thatsYourName(string name)
	{
		fullName = name;
	}
	void thatsYourAge(int myAge)
	{
		age = myAge;
	}
	void thatsYourDummyInt(int myDummyInt)
	{
		dummyInt = myDummyInt;
	}	
};

int main() {
	/* A Struct is a group of  data elements, that could be seen as the abstraction of a concept	*
	* (see: http://www.cplusplus.com/doc/tutorial/structures/), the members of a struct instead		*
	* of the members of a container don't have to share it's type // as important tip all it's		*
	* members are public by default																	*/

	person dummy;
	dummy.age = 1000;
	dummy.fullName = "Dummy Person for struct concept";
	// dummy.dummyInt;
	cout << "Let's see what's about our dummy person" << endl << " name: ";
	dummy.whatsMyName(); 
	cout << " age: ";
	dummy.whatsMyAge();
	cout << " dummyInt: ";
	dummy.whatsDummyInt();

	cout << "Let's gonna change those values and check again (...)" << endl << " name: ";
	dummy.thatsYourName("Test");
	dummy.whatsMyName();
	cout << " age: ";
	dummy.thatsYourAge(10);
	dummy.whatsMyAge();
	cout << " dummyInt: ";
	dummy.thatsYourDummyInt(0);
	dummy.whatsDummyInt();

	return 0;
}