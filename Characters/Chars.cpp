#include <iostream>

using namespace std;

int main() {
	/* Chars are part of fundamentals data types (see: https://msdn.microsoft.com/es-co/library/cc953fe1.aspx)	*
	* and it can hold an 8 bit integer - 1 Byte but it's treatment is a little different, because the chars		*
	* are interpreted as ASCII codes (see: http://www.learncpp.com/cpp-tutorial/27-chars/)						*
	* this codes can be searched in the ASCII table (see: http://www.asciitable.com/) in which specifies		*
	* what symbol belongs to which number.																		*
	*																											*
	* starting by the fact of a char can hold 1 byte we have certain restrictions with the sizes an we can do	*
	* overflows (see: https://msdn.microsoft.com/es-es/library/296az74e.aspx)									*
	*																											*
	* To know more about the escape characters (see: https://goo.gl/Ro81Mx)										*/

	char basicChar, intChar;
	signed char overflow_s; // [-128, 127]
	unsigned char overflow_u; // [0, 255]	

	cout << "Welcome to this short tutorial about use of chars." << endl
		<< endl << "First of all let's see some interesting things about chars"
		<< endl;
	basicChar = '*';
	intChar = 42;
	cout << "Char initialized as * " << basicChar << " and char initialized as int " << intChar
		<< endl << "Equivalent int: " << static_cast <int> (basicChar) << endl
		<< "Ey!, but we have certain chars that need an especial representation"
		<< endl << " this especial chars are knowed as escape characters"
		<< endl << " and need of a backslash before put the character ... "
		<< endl << " for example to put an \\ you have to write it two times \\\\"
		<< endl << " and same way to assing it to a variable the code so gonna be"
		<< endl << " myCoolChar1 = \'\\\\\' or by its equivalent number 92 "
		<< endl << " myCoolChar2 = 92 and both lines will assing a backslash to the variable"
		<< endl;
	basicChar = '\\';
	intChar = 92;

	cout << " escaped char: " << basicChar 
		<< " char assigned by an integer: " << intChar << endl 
		<< endl << "________________________________________________________________"
		<< endl << "What do you believe could happen if we overflow a signed char?"
		<< endl << "Let's see! ... " << endl;

	for (int i = -129; i <= 260; i++)
	{
		overflow_s = i;
		cout << i << ": " << overflow_s << ", ";
	}

	cout << endl << "And what would happen if we do the same process with an unsigned char?"
		<< endl << "Let's see! ... " << endl;

	for (int i = -1; i <= 260; i++)
	{
		overflow_u = i;
		cout << i << ": " << overflow_u << ", ";
	}

	return 0;
}