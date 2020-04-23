#pragma once
#include <iostream>
#include <string>

class Person {
protected:
	std::string name;
	int age;
public:
	Person(){}
	Person(int age) : name("Charlie"), age(age) {
		std::cout << "Constructing Person: " << name << std::endl;
	}
	Person(std::string name, int age): name(name), age(age){
		std::cout << "Constructing Person: " << name << std::endl;
	}


	std::string GetName() {
		return name;
	}

	virtual std::string GetDetails() {
		return name + " " + std::to_string(age);
	}
	~Person() {
		std::cout << "Destructuring Person: " << name << std::endl;
	}
};