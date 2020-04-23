#pragma once
#include <iostream>
#include <string>

class Person {
private:
	std::string name;
	int age;
public:
	Person(std::string name, int age): name(name), age(age){
		std::cout << "Constructing Person: " << name << std::endl;
	}

	Person(int age) : name("Charlie"), age(age) {
		std::cout << "Constructing Person: " << name << std::endl;
	}

	std::string GetName() {
		return name;
	}

	std::string GetDetails() {
		return name + " " + std::to_string(age);
	}
	~Person() {
		std::cout << "Destructuring Person: " << name << std::endl;
	}
};