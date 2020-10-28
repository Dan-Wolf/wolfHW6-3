// Class for holding records of names and phone numbers.
// DTW

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include<string>
#include "Record.h"

using namespace std;

const int MAXSIZE = 10;

class PhoneBook {
	private: 
		Record list[MAXSIZE];
		string bookName;
		int num_records;
		int findName(string s);
	public:
		PhoneBook();
		PhoneBook(string s);
		string getPhoneBookName();
		int getNumberofRecords();
		void insert(string name, int number);
		void displayPhoneBook();
		void removeName(string s);
		int getPhoneNumber(string s);
		~PhoneBook();
};

#endif //PHONEBOOK_H
