#include "pch.h"
#include "Person.h"

Person::Person()
{
	std::cout << "Person DefCTOR\n";
	firstName = "";
	lastName = "";
	nickName = "";
	address = "";
	workPhone = "";
	privatePhone = "";
}

Person::Person(const std::string pFirstName, const std::string pLastName, const std::string pNickName, const std::string pAddress, const std::string pWorkPhone, const std::string pPrivatePhone)
{
	std::cout << "Person ParamCTOR\n";
	this->firstName = pFirstName;
	this->lastName = pLastName;
	this->nickName = pNickName;
	this->address = pAddress;
	this->workPhone = pWorkPhone;
	this->privatePhone = pPrivatePhone;
}


Person::Person(const Person & p)
{
	std::cout << "Person CCTOR\n";
	firstName = p.firstName;
	lastName = p.lastName;
	nickName = p.nickName;
	address = p.address;
	workPhone = p.workPhone;
	privatePhone = p.privatePhone;
}


Person::~Person()
{
	std::cout << "Person DCTOR\n";
}

Person& Person::operator=(const Person& p)
{
	if (this != &p) {
		std::cout << "Person operator= \n";
		firstName = p.firstName;
		lastName = p.lastName;
		nickName = p.nickName;
		address = p.address;
		workPhone = p.workPhone;
		privatePhone = p.privatePhone;
	}
	return *this;
}

bool Person::operator==(const Person & p)
{
	std::cout << "Person operator== \n";
	if (firstName == p.firstName && lastName == p.lastName&& nickName == p.nickName) {
		return true;
	}
	else
	{
		return false;
	}
}


