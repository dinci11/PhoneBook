#pragma once
#include "Person.h"
#include <vector>
using namespace std;

class PhoneBook
{
public:

	char* fileName;
	Person *contacts;
	int currentSize;
	int size;

	PhoneBook(const char* pbFileName, int pbSize);
	PhoneBook(const PhoneBook&);
	~PhoneBook();
	void addPerson(Person p);
	void removePerson(Person p);
	void savePhoneBook();
	void loadPhoneBook();
	void printPhoneBook();
};

