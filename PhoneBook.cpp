#include<string>
#include<iostream>
#include "Record.h"
#include "PhoneBook.h"

using namespace std;


int PhoneBook::findName(string s) {
	for (int i = 0; i < MAXSIZE; i++) {
		if (list[i].getName() == s) {
			return i;
		}
	}
	return 99;
}

PhoneBook::PhoneBook() {}

PhoneBook::PhoneBook(string s) {
	bookName = s;
	num_records = 0;
}

string PhoneBook::getPhoneBookName() {
	return bookName;
}

int PhoneBook::getNumberofRecords() {
	return num_records;
}

void PhoneBook::insert(string name, int number) {
	Record temp(name, number);
	list[num_records] = temp;
	num_records++;
}

void PhoneBook::displayPhoneBook() {
	for (int i = 0; i < num_records; i++) {
		cout << list[i].getName() << "	" << list[i].getNumber() << endl;
	}	
}

void PhoneBook::removeName(string s) {
	int i = findName(s);
      	if (i != 99){ 
		for(int n = i; n < num_records; n++) {
			list[n] = list[n+1];
		}
		num_records--;
	}

}

int PhoneBook::getPhoneNumber(string s) {
	int i = findName(s);
	return list[i].getNumber();
}  

PhoneBook::~PhoneBook() {}
