#include <iostream>
#include <string>

using namespace std;

int main() {
	/* A string is the representation of a sequence of characters	*
	* (see: http://www.cplusplus.com/reference/string/string/) in	*
	* but it's a fundamental type. The use of string provide some	*
	* other functions to do certain manipulations in our sequence	*
	* (see: http://www.cplusplus.com/reference/string/string/)		*/

	cout << "First let's see how to declare a std::string" << endl
		<< " you have to include the header <string>" << endl;

	string constructed("PRUEBA DE CADENAS No. 1");

	cout << " There are two ways of create a string:"
		<< endl << "string cool(\"STRING\")"
		<< endl << "string cool = \"STRING\"" << endl;

	string assigned = "PRUEBA DE CADENAS No. 2";

	/* Methods for manuipulation:									*
	* size(), length () esto realiza exactamente lo mismo			*
	* la ventaja de una cadena es que su tamaño no es estático		*
	* max_size(), resize(), clear(), empty(), back(), empty()		*
	* find()														*/

	cout << "\"" + constructed + "\" is "
		<< constructed.length() << " characters long." << endl
		<< "and \"" + assigned + "\" is "
		<< assigned.size() << " characters long." << endl
		<< "comparing strings, result : " 
		<< constructed.compare(assigned) << endl;

	auto space = assigned.find(' ');
	string beginning = assigned.substr(space + 1);
	cout << beginning << endl;

	beginning = (constructed += " ") += assigned;
	cout << beginning << endl;

	beginning.append(" PRUEBA APPEND");
	cout << beginning << endl;

	beginning.push_back('P');
	cout << beginning << endl;

	constructed.clear();
	cout << "Now constructed is: "
		<< constructed << endl;
		<< "setting again constructed ";
	
	constructed = "Dummy string";
	cout << "constructed is: \"" + constructed + "\" 
		<< endl << "assigned is: \"" + assigned + "\"
		<< endl << "swapping values with assigned" << endl;
	
	constructed.swap(assigned);
	
	cout << "Done, now constructed is: \"" + constructed + "\" 
		<< endl << "assigned is: \"" + assigned + "\" << endl;		

	return 0;
}