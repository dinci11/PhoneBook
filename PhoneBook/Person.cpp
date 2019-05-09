#include "pch.h"
#include "Person.h"
#include <stdio.h>

using namespace std;

char* stringcpy(char* destination, const char* source)
{
	for (int i = 0; source[i] != '\0'; i++)
	{
		destination[i] = source[i];
		destination[i + 1] = '\0';
	}
	return destination;
}

Person::Person()
{
	firstName = nullptr;
	lastName = nullptr;
	nickName = nullptr;
	address = nullptr;
	workPhone = nullptr;
	privatePhone = nullptr;
}

Person::Person(const char* pFirstName, const char* pLastName, const char* pNickName, const char* pAddress, const char* pWorkPhone, const char* pPrivatePhone)
{
	firstName = new char[strlen(pFirstName) + 1];
	lastName = new char[strlen(pLastName) + 1];
	nickName = new char[strlen(pNickName) + 1];
	address = new char[strlen(pAddress) + 1];
	workPhone = new char[strlen(pWorkPhone) + 1];
	privatePhone = new char[strlen(pPrivatePhone) + 1];

	stringcpy(firstName, pFirstName);
	stringcpy(lastName, pLastName);
	stringcpy(nickName, pNickName);
	stringcpy(address, pAddress);
	stringcpy(workPhone, pWorkPhone);
	stringcpy(privatePhone, pPrivatePhone);


}

Person::Person(Person & p)
{
	firstName = p.firstName;
	lastName = p.lastName;
	nickName = p.nickName;
	address = p.address;
	workPhone = p.workPhone;
	privatePhone = p.privatePhone;
}


Person::~Person()
{
	delete[] firstName;
	delete[] lastName;
	delete[] nickName;
	delete[] address;
	delete[] workPhone;
	delete[] privatePhone;
}

Person& Person::operator=(Person p)
{
	if (this != &p) {
		firstName = p.firstName;
		lastName = p.lastName;
		nickName = p.nickName;
		address = p.address;
		workPhone = p.workPhone;
		privatePhone = p.privatePhone;
	}
	return *this;
}

bool Person::operator==(Person & p)
{
	if (strcmp(firstName, p.firstName) == 0 && strcmp(lastName, p.lastName) == 0 && strcmp(nickName, p.nickName) == 0) {
		return true;
	}
	else
	{
		return false;
	}
}


