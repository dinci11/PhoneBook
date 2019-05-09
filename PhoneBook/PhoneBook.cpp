#include "pch.h"
#include "PhoneBook.h"
#include <iostream>
#include <fstream>


PhoneBook::PhoneBook(const std::string pbFileName, int pbSize)
{
	std::cout << "PhoneBook CTOR\n";
	fileName = pbFileName;
	contacts = new Person[size];
	size = pbSize;
	currentSize = 0;
}

PhoneBook::PhoneBook(const PhoneBook & pb)
{
	std::cout << "PhoneBook CCTOR\n";

	size = pb.size;
	currentSize = pb.currentSize;
	fileName = pb.fileName;
	for (size_t i = 0; i < pb.size; i++)
	{
		contacts[i] = pb.contacts[i];
	}

}


PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook DTOR\n";
	delete[] contacts;
 }

void PhoneBook::addPerson(Person p)
{
	if (currentSize < size)
	{
		contacts[currentSize] = p;
		currentSize++;
	}
	else {
		std::cout << "The phonebook is full!\n";
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
		std::cout << this->contacts[i].firstName;
	}
	std::cout << "\n";
}
