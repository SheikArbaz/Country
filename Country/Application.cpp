#include <iostream>
#include <memory>
#include "Application.h"
#include "Robot.h"
#include "Person.h"
#include "Employee.h"

int main() {
	//Accessing a static library
	PrintHelloWorld();

	//Implicit Conversion Example
	ImplicitConversionExample();

	//ObjectLifeTimeExample
	ObjectLifeTimeExample();

	//PolymorphismAndSlicingExample
	PolymorphismAndSlicingExample();
	
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

void ObjectLifeTimeExample(){
	{
		Person person = Person("Bob", 20);
		Person* pPerson = new Person("Ram", 38);
	}//Bob object gets destroyed but not Ram

	Person* pPerson2 = nullptr;

	{
		pPerson2 = new Person("Ramesh", 38);
	}//Ramesh doesn't get destroyed here. 
	//Though we loose access to pPerson2, the memory allocated it won't get destroyed

	//To destroy Ramesh use delete
	delete pPerson2;
}

void PolymorphismAndSlicingExample() {
	Person* pPerson =  new Employee("Bob", 32, "1a");

	//Derived class's function gets called
	std::cout << pPerson->GetDetails() << std::endl;

	
	Person person = Employee("Charlie", 21, "1b");
	//id will be lost due to slicing here.
	std::cout << person.GetDetails() << std::endl;

	Person &personTwo = Employee("Daniel", 31, "1c");
	//id won't be lost because personTwo is just an alias(reference) to Daniel Employee
	std::cout << personTwo.GetDetails() << std::endl;
}
