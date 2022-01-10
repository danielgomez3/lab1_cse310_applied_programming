/* Hello world program by Daniel Gomez*/

// all lines that start with a pound sign are directives
// invoked by a preprocessor*
// Tells compiler to include the standard iostream file which contains
//cout and cin

#include <iostream>

int main()
{
	std::cout << "Hello World\n";
	return 0;
}


/*
 * Preprocessor: invoked by the compiler to compile code
 * 	with certain conditions
 * 'Using namespace std': Including this is generally bad practice
 *	we are pulling all 'type' definitions (int, etc.) into the current scope
 *	alternative would be to use the scope operator (::) each time
 *	we declare a type
 *	namespace means that two objects can have the same name
 *	yet be treated differently
 * 	
 * 	'::' - This tells us explicitly which namespace our
 * 	identifier belongs to
 */
