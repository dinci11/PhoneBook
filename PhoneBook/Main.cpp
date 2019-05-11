// PhoneBook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Person.h"
#include "PhoneBook.h"
#include"memtrace.h"
#include "gtest_lite.h"

int main()
{
	TEST(PhoneBook_TEST, Init with size 2 and with no contacts) {
		PhoneBook pb = PhoneBook("Test_PhoneBook", 2);
		pb.printPhoneBook();
		EXPECT_EQ(0, pb.currentSize);
		EXPECT_EQ(2, pb.size);
	}END

	TEST(PhoneBook_TEST, Init with size 10 and with 4 contacts) {
		PhoneBook pb = PhoneBook("Test_PhoneBook", 10);

		Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p1);
		Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p2);
		Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p3);
		Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p4);
		pb.printPhoneBook();
		EXPECT_EQ(10, pb.size);
		EXPECT_EQ(4, pb.currentSize);
	}END

	TEST(PhoneBook_TEST, Init with size 10 and with 4 contacts and remove the second one) {
		PhoneBook pb = PhoneBook("Test_PhoneBook", 10);

		Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p1);
		Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p2);
		Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p3);
		Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p4);
		
		Person pToRemove("FirstName2", "LastName2", "nick2");
		pb.removePerson(pToRemove);
		pb.printPhoneBook();
		EXPECT_EQ(10, pb.size);
		EXPECT_EQ(3, pb.currentSize);
	}END

	TEST(PhoneBook_TEST, nit with size 5 and with 5 contacts and try to add new contact) {
		PhoneBook pb = PhoneBook("Test_PhoneBook", 5);

		Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p1);
		Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p2);
		Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p3);
		Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p4);
		Person p5("FirstName5", "LastName5", "nick5", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p5);
		Person p6("FirstName6", "LastName6", "nick6", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p6);
		pb.printPhoneBook();
		EXPECT_EQ(5, pb.size);
		EXPECT_EQ(pb.currentSize, pb.size);
	}END


		TEST(PhoneBook_TEST, nit with size 6 and with 6 contacts and check the fields) {
		PhoneBook pb = PhoneBook("Test_PhoneBook", 6);

		Person p1("FirstName1", "LastName1", "nick1", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p1);
		Person p2("FirstName2", "LastName2", "nick2", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p2);
		Person p3("FirstName3", "LastName3", "nick3", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p3);
		Person p4("FirstName4", "LastName4", "nick4", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p4);
		Person p5("FirstName5", "LastName5", "nick5", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p5);
		Person p6("FirstName6", "LastName6", "nick6", "Addrasdasdasd1", "+123456789", "06123456789");
		pb.addPerson(p6);
		pb.printPhoneBook();
		EXPECT_STREQ("FirstName1", pb.contacts[0].firstName);
		EXPECT_STREQ("LastName2", pb.contacts[1].lastName);
		EXPECT_STREQ("nick3", pb.contacts[2].nickName);
		EXPECT_STREQ("Addrasdasdasd1", pb.contacts[3].address);
		EXPECT_STREQ("+123456789", pb.contacts[4].workPhone);
		EXPECT_STREQ("06123456789", pb.contacts[5].privatePhone);
	}END

		return 0;
}

