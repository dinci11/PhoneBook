#pragma once
#include <string>
#include<iostream>

class Person
{
public:

	char separator = '|';

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string address;
	std::string workPhone;
	std::string privatePhone;

	Person();
	Person(const std::string fN, const std::string lN, const std::string nN, const std::string a, const std::string wP, const std::string pP);
	~Person();
	Person(const Person& p);

	Person& operator=(const Person&);
	bool operator==(const Person&);
};

