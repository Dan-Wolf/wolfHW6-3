// Class for holding name and phone number of a person.
// DTW

#ifndef RECORD_H
#define RECORD_H

#include<string>

using namespace std;

class Record {
	private:
		string name;
		int number;
	public:
		Record();
		Record(string name, int number);
		string getName();
		int getNumber();
		void setName(string s);
		void setNumber(int n);
		~Record();
};

#endif //RECORD_H
