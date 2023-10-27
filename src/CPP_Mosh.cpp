//As the buttons of a TV remote have different functions serving varying purposes,
//CPP program have 1000s of functions, each serving a purpose. One such function is main(), which
//is the entry point to our program. It's like the power button of our TV remote.

//CPP is a case-sensitive language. i.e, upper case and lower case have different meanings.

//Before writing a function name, we need to specify the type of value we are returning.
//So when we run our program, the OS will execute this function and the value that this function
//returns will tell the OS if our program terminated successfully or not.
//The usual way is to treat 0 as no error and every other value as error.

#include <iostream> //One of the files in standard library - input output stream. This file
//has the capability to take inputs from user and print something on screen.

int main()
{
	//Body
	//Standard libraries give lots of capabilities
	//std is the short form for standard library. This is like a container that has features
	//available to us.

	std::cout << "Hello World..."; //Every statement in c should be terminated with a semi-column.
	std::cout << "Bye" << std::endl;
	std::cout << "world";

	//To avoid the repeated use of std, we can write a line of code:
	//"using namespace std;" after "#include <iostream"
	//Strings should be in double quotes.
	//cout is the short form for "character out".

	return 0;

}
