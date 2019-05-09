// PhoneBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.h"
#include "PhoneBook.h"
#include"memtrace.h"

void Test1() {

	cout << "===================TEST#1===================\n\n";

	PhoneBook pb = PhoneBook("Test1_PhoneBook", 10);

	Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p1);
	Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p2);
	Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p3);
	Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p4);

	pb.savePhoneBook();

	Person p5("FirstName4", "LastName4", "nick4", "Addr4", "+123456789", "06123456789");
	pb.removePerson(p4);
	pb.removePerson(p3);

	pb.printPhoneBook();
	
	cout << "\n\n===================TEST#1 END===================\n\n";
}
void Test2() {
	cout << "===================TEST#2===================\n\n";

	PhoneBook pb = PhoneBook("Test2_PhoneBook", 2);

	Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p1);
	Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p2);
	Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p3);
	Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p4);

	Person p5("FirstName5", "LastName5", "nick5", "Addr4", "+123456789", "06123456789");
	pb.removePerson(p4);
	pb.removePerson(p3);
	pb.removePerson(p5);

	pb.printPhoneBook();

	cout << "\n\n===================TEST#2 END===================\n\n";
}
void Test3() {
	cout << "===================TEST#3===================\n\n";

	PhoneBook pb = PhoneBook("Test3_PhoneBook", 10);

	Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p1);
	Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p2);
	Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p3);
	Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
	pb.addPerson(p4);
	Person p5("FirstName4", "LastName4", "nick4", "Addr4", "+123456789", "06123456789");
	pb.addPerson(p4);
	
	pb.printPhoneBook();
	cout << "\n\n===================TEST#3 END===================\n\n";
}
void Test4() {
	cout << "===================TEST#4===================\n\n";

	PhoneBook pb = PhoneBook("Test4_PhoneBook", 2);
	pb.printPhoneBook();

	cout << "\n\n===================TEST#4 END===================\n\n";
}


int main()
{
	Test1();
	Test2();
	Test3();
	Test4();
	return 0;
}

