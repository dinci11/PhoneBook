// PhoneBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.h"
#include "PhoneBook.h"

int main()
{
	PhoneBook pb = PhoneBook("MyPhoneBook", 10);
	
	Person p1("FirstName1", "LastName1", "nick1", "Addr1", "+123456789", "06123456789");
	pb.addPerson(p1);
	Person p2("FirstName2", "LastName2", "nick2", "Addr2", "+123456789", "06123456789");
	pb.addPerson(p2);
	Person p3("FirstName3", "LastName3", "nick3", "Addr3", "+123456789", "06123456789");
	pb.addPerson(p3);
	Person p4;
	p4 = p3;
	pb.removePerson(p4);

	pb.printPhoneBook();


}

