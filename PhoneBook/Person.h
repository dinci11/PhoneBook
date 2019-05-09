#pragma once
#include <string>

class Person
{
public:

	char separator = '|';

	char* firstName;
	char* lastName;
	char* nickName;
	char* address;
	char* workPhone;
	char* privatePhone;

	Person();
	Person(const char* fN, const char* lN, const char* nN, const char* a, const char* wP, const char* pP);
	~Person();
	Person(Person& p);

	Person& operator=(Person p);
	bool operator==(Person& p);
};

