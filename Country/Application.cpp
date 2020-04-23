#include <iostream>
#include "Application.h"
#include "Robot.h"
#include "Person.h"

int main() {
	//Accessing a static library
	PrintHelloWorld();

	//Implicit Conversion Example
	ImplicitConversionExample();
	
	std::cin.get();
	return 0;
}

void ImplicitConversionExample() {
	//Normal object creation, Visit Person's Constructor
	Person person(32);
	std::cout << person.GetDetails() << std::endl;

	//Implicit conversion
	Person secondPerson = 42;
	std::cout << person.GetDetails() << std::endl;
}