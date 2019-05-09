#include "pch.h"
#include "PhoneBook.h"
#include <iostream>
#include <fstream>

/*
Constructor with parmaters
Set the file where to save the contacts and set the size of the contavts container
*/
PhoneBook::PhoneBook(const char* pbFileName, int pbSize)
{
	cout << "PhoneBook CTOR\n";
	fileName = pbFileName;
	contacts = new Person[size];
	for (size_t i = 0; i < pbSize; i++)
	{
		contacts[i] = Person();
	}
	size = pbSize;
	currentSize = 0;
}

/*
Copy constructor
*/
PhoneBook::PhoneBook(const PhoneBook & pb)
{
	cout << "PhoneBook CCTOR\n";

	size = pb.size;
	currentSize = pb.currentSize;
	fileName = pb.fileName;
	for (size_t i = 0; i < pb.size; i++)
	{
		contacts[i] = pb.contacts[i];
	}

}

/*
Destructor
Delete the allocated memory for the contacts
*/
PhoneBook::~PhoneBook()
{
	cout << "PhoneBook DTOR\n";
	if(contacts!=NULL)
	delete[] contacts;
}

/*
Add new Person to the contacts
If the container is full than cannot add new
*/
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

/*
Remove Person from contacts
The remaining Person pointers are shifted to left, so the empty spaces are always at the end of the array
*/
void PhoneBook::removePerson(Person p)
{
	for (size_t i = 0; i < currentSize; i++)
	{
		if (contacts[i] == p) {
			for (size_t j = i; j < currentSize; j++)
			{
				if (j == size - 1) {
					contacts[j] = Person();
				}
				else
				{
					contacts[j] = contacts[j + 1];
				}
			}
			currentSize--;
		}
	}
	
}

/*
Save the contacts to the file system
The extension is .txt
The first line contains the total and the current size of the saved phonebook
*/
void PhoneBook::savePhoneBook()
{
	ofstream file;
	file.open(fileName+"txt");
	file << size << "|" << currentSize<<"\n";
	for (size_t i = 0; i < currentSize; i++)
	{
		file << contacts[i].firstName << "|" << contacts[i].lastName << "|" << contacts[i].nickName << "|" << contacts[i].address << "|" << contacts[i].workPhone << "|" << contacts[i].privatePhone << "\n";
	}
}

/*
void PhoneBook::loadPhoneBook()
{
	string line;
	ifstream file(fileName + "txt");
	if (file.is_open()) {
		int lineCntr = 0;
		while (getline(file,line))
		{
			if (lineCntr == 0) {
				
			}
			else
			{

			}
		}
		file.close();
	}
	else
	{
		std::cout << "File cannot open!\n";
	}
}
*/

/*
Print out the available contacts to the console
*/
void PhoneBook::printPhoneBook()
{

	cout << "Firstname\tLastname\tNickname\tAddress\t\tWorkphone\tPrivatephone\n";
	cout << "______________________________________________________________________________________________\n";
	for (size_t i = 0; i < currentSize; i++)
	{
		cout << contacts[i].firstName << "\t" << contacts[i].lastName << "\t" << contacts[i].nickName << "\t\t" << contacts[i].address << "\t" << contacts[i].workPhone << "\t" << contacts[i].privatePhone << "\n";
	}
	cout << "\n";
}
