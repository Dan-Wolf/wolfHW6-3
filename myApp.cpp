#include<string>
#include<iostream>
#include"PhoneBook.h"

using namespace std;

int main() {
	PhoneBook book("book");
	string num;
	while(1) {

		cout << "1. Insert a name and number." << endl;
		cout << "2. Get a number for a person." << endl;
		cout << "3. Display phone book." << endl;
		cout << "4. Remove a person from phone book." << endl;
		cout << "5. Quit." << endl;
		cout << "Enter a number that corresponds to your choice: ";
		cin >> num;
		cout << endl;

		if(num == "1") { 		//Insert name and number
			string name;
			int number;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Number: ";
			cin >> number;

			book.insert(name, number);
			cout << "Inserted " << name << " into phone book" << endl;
		}
		else if (num == "2") {	//Get a number for a person
			string name;
			cout << "Enter Name: ";
			cin >> name;
			cout << endl;
			cout << name << "'s number is: " << book.getPhoneNumber(name) << endl;
		}
		else if (num == "3") {	//Display phone book
			cout << "***********************************************" << endl;
			cout << "	      Contents of Phone Book" << endl;
			book.displayPhoneBook();
			cout << "***********************************************" << endl;
		}
		else if (num == "4") { 	//Remove a person from phone book
			string name;
			cout << "Enter Name: ";
			cin >> name;
			cout << endl;
			book.removeName(name);
			cout << name << " is removed." << endl;
		}
		else if (num == "5") { 	//Quit
			break;
		}
		else {
			cout << "Invalid Selection!" << endl;
			//num = 0;
		}

		cout << endl;
	}

	return 0;
}
