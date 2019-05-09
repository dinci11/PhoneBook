#pragma once
#include "Person.h"
#include <string>

class PhoneBook
{
public:

	std::string fileName;
	Person* contacts;
	int currentSize;
	int size;

	PhoneBook(const std::string pbFileName, int pbSize);
	PhoneBook(const PhoneBook&);
	~PhoneBook();
	void addPerson(Person p);
	void removePerson(Person p);
	void savePhoneBook();
	void loadPhoneBook();
	void printPhoneBook();
};

