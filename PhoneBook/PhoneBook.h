#pragma once
#include "Person.h"
#include <vector>
using namespace std;

class PhoneBook
{
public:

	string fileName;
	Person *contacts;
	int currentSize;
	int size;

	PhoneBook(string pbFileName, int pbSize);
	~PhoneBook();
	void addPerson(Person p);
	void removePerson(Person p);
	void savePhoneBook();
	void loadPhoneBook();
	void printPhoneBook();
};

