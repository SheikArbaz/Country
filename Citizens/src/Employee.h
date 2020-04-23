#pragma once
#include <string>
#include "Person.h"
class Employee : public Person {
private: 
	std::string id;
public:
	Employee(std::string name, int age, std::string id ): Person(name, age), id(id){}
	std::string GetDetails() {
		return id + ". " + name + " " + std::to_string(age);
	}
};