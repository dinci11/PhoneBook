#include "pch.h"
#include "Person.h"
#define PRINT_METHOD false

/*
Default Constructor for Person
*/
Person::Person()
{
#if PRINT_METHOD true
	std::cout << "Person DefCTOR\n";
#endif // PRINT_METHOD true

	firstName = new char();
	lastName = new char();
	nickName = new char();
	address = new char();
	workPhone = new char();
	privatePhone = new char();
}

/*
Constructor with paramters for set fields
*/
Person::Person(const char* pFirstName, const char* pLastName, const char* pNickName, const char* pAddress, const char* pWorkPhone, const char* pPrivatePhone)
{
#if PRINT_METHOD true
	std::cout << "Person ParamCTOR\n";
#endif // PRINT_METHOD true

	firstName = new char[strlen(pFirstName) + 1];
	lastName = new char[strlen(pLastName) + 1];
	nickName = new char[strlen(pNickName) + 1];
	address = new char[strlen(pAddress) + 1];
	workPhone = new char[strlen(pWorkPhone) + 1];
	privatePhone = new char[strlen(pPrivatePhone) + 1];

	strcpy_s(firstName, strlen(pFirstName) + 1, pFirstName);
	strcpy_s(lastName, strlen(pLastName) + 1, pLastName);
	strcpy_s(nickName, strlen(pNickName) + 1, pNickName);
	strcpy_s(address, strlen(pAddress) + 1, pAddress);
	strcpy_s(workPhone, strlen(pWorkPhone) + 1, pWorkPhone);
	strcpy_s(privatePhone, strlen(pPrivatePhone) + 1, pPrivatePhone);
}

/*
Copy constructor
*/
Person::Person(const Person & p)
{
#if PRINT_METHOD ture
	std::cout << "Person CCTOR\n";
#endif // PRINT_METHOD ture

	firstName = new char[strlen(p.firstName) + 1];
	lastName = new char[strlen(p.lastName) + 1];
	nickName = new char[strlen(p.nickName) + 1];
	address = new char[strlen(p.address) + 1];
	workPhone = new char[strlen(p.workPhone) + 1];
	privatePhone = new char[strlen(p.privatePhone) + 1];

	strcpy_s(firstName, strlen(p.firstName) + 1, p.firstName);
	strcpy_s(lastName, strlen(p.lastName) + 1, p.lastName);
	strcpy_s(nickName, strlen(p.nickName) + 1, p.nickName);
	strcpy_s(address, strlen(p.address) + 1, p.address);
	strcpy_s(workPhone, strlen(p.workPhone) + 1, p.workPhone);
	strcpy_s(privatePhone, strlen(p.privatePhone) + 1, p.privatePhone);
}

/*
Destructor
Delete all the allocated memory for fields
*/
Person::~Person()
{
#if PRINT_METHOD true
	std::cout << "Person DCTOR\n";
#endif // PRINT_METHOD true

	delete[] firstName;
	delete[] lastName;
	delete[] nickName;
	delete[] address;
	delete[] workPhone;
	delete[] privatePhone;
}

/*
Override operator=
*/
Person& Person::operator=(const Person p)
{
#if PRINT_METHOD true
	std::cout << "Person operator= \n";
#endif // PRINT_METHOD true

	if (this != &p) {

		firstName = new char[strlen(p.firstName) + 1];
		lastName = new char[strlen(p.lastName) + 1];
		nickName = new char[strlen(p.nickName) + 1];
		address = new char[strlen(p.address) + 1];
		workPhone = new char[strlen(p.workPhone) + 1];
		privatePhone = new char[strlen(p.privatePhone) + 1];

		strcpy_s(firstName, strlen(p.firstName) + 1, p.firstName);
		strcpy_s(lastName, strlen(p.lastName) + 1, p.lastName);
		strcpy_s(nickName, strlen(p.nickName) + 1, p.nickName);
		strcpy_s(address, strlen(p.address) + 1, p.address);
		strcpy_s(workPhone, strlen(p.workPhone) + 1, p.workPhone);
		strcpy_s(privatePhone, strlen(p.privatePhone) + 1, p.privatePhone);

	}
	return *this;
}

/*
Override operator==
Two Person are equal if their firstname are equals and theri lastname are quals and their nickname are equals
*/
bool Person::operator==(const Person & p)
{
#if PRINT_METHOD true
	std::cout << "Person operator== \n";
#endif // PRINT_METHOD true

	if (strcmp(firstName, p.firstName) == 0 && strcmp(lastName, p.lastName) == 0 && strcmp(nickName, p.nickName) == 0) {
		return true;
	}
	else
	{
		return false;
	}
}


