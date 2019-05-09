#include "pch.h"
#include "PhoneBook.h"
#include <iostream>
#include <fstream>


PhoneBook::PhoneBook(const char* pbFileName, int pbSize)
{
	cout << "PhoneBook CTOR\n";
	fileName = new char[strlen(pbFileName) + 1];
	strcpy_s(fileName, strlen(pbFileName) + 1, pbFileName);
	contacts = new Person[size];
	size = pbSize;
	currentSize = 0;
}

PhoneBook::PhoneBook(const PhoneBook & pb)
{
	cout << "PhoneBook CCTOR\n";

	size = pb.size;
	currentSize = pb.currentSize;
	fileName = new char[strlen(pb.fileName) + 1];
	strcpy_s(fileName, strlen(pb.fileName) + 1, pb.fileName);
	for (size_t i = 0; i < pb.size; i++)
	{
		contacts[i] = pb.contacts[i];
	}

}


PhoneBook::~PhoneBook()
{
	cout << "PhoneBook DTOR\n";
	delete[] fileName;
 }

void PhoneBook::addPerson(Person p)
{
	if (currentSize < size)
	{
		contacts[currentSize] = p;
		currentSize++;
	}
	else {
		cout << "The phonebook is full!\n";
	}



}

void PhoneBook::removePerson(Person p)
{
	for (size_t i = 0; i < currentSize; i++)
	{
		if (contacts[i] == p) {
			for (size_t j = i; j < currentSize; j++)
			{
				if (j == size - 1) {

				}
				else
				{
					contacts[j] = contacts[j + 1];
				}
			}
		}
	}
	currentSize--;
}

void PhoneBook::savePhoneBook()
{

}

void PhoneBook::loadPhoneBook()
{
}

void PhoneBook::printPhoneBook()
{
	for (size_t i = 0; i < currentSize; i++)
	{
		cout << this->contacts[i].firstName;
	}
	cout << "\n";
}
