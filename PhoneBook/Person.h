#pragma once
#include <string>
#include<iostream>
#include"memtrace.h"

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
	Person(const Person& p);

	Person& operator=(const Person p);
	bool operator==(const Person& p);

};

