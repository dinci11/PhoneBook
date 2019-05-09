#include "pch.h"
#include "PhoneBook.h"
#include <iostream>
#include <fstream>


PhoneBook::PhoneBook(string pbFileName, int pbSize)
{
	fileName = pbFileName;
	contacts = new Person[size];
	size = pbSize;
	currentSize = 0;
}


PhoneBook::~PhoneBook()
{
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
	for (size_t i = 0; i < currentSize - 1; i++)
	{
		cout << this->contacts[i].firstName;
	}
}
