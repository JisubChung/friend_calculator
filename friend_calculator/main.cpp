#include <iostream>
#include <string>
#include "person.h"
#include "male.h"
#include "female.h"

using namespace std;

int main()
{
	string friendName;		//Name of Friend
	int friendGive;			//Cost of Friend
	int friendTake;		//a second variable to get the cost
	int friendSince;		//Years known Friend
	int friendLastTalked;	//Days since talked to Friend
	string friendGender;	//Gender of Friend

	cout << "This program will tell how much a friend costs and how good of a friend they are!" << endl;
	cout << "Name of this friend? ";
	getline(cin, friendName);
	cout << "How much money have you spent on this friend? ";
	cin >> friendTake;
	cout << "How much money has this friend spent on you? ";
	cin >> friendGive;
	cout << "How long have you been friends with this friend? ";
	cin >> friendSince;
	cout << "How many days has it been since you talked to this friend? ";
	cin >> friendLastTalked;
	cout << "What gender is this friend (M/F)?" ;
	cin >> friendGender; //should change to getline probably

	if (friendGender == "M")
	{
		male p(friendName, friendGive, friendTake, friendSince, friendLastTalked);
		cout << p.getName() << " has been your friend for " << p.getDuration() << "years... AND OTHER INFORMATION DUMP: " << p.getGive() << " " << p.getTake() << " " << p.getSince() << endl;
		p.saySomething();
	}
	else if (friendGender == "F")
	{
		female p(friendName, friendGive, friendTake,friendSince,friendLastTalked);
		cout << p.getName() << " has been your friend for " << p.getDuration() << "years... AND OTHER INFORMATION DUMP: " << p.getGive() << " " << p.getTake() << " " << p.getSince() << endl;
		p.saySomething();
	}
	else
	{
		cout << "Assuming no gender" << endl;
		person p(friendName,friendGive,friendTake,friendSince,friendLastTalked);
		cout << p.getName() << " has been your friend for " << p.getDuration() << "years... AND OTHER INFORMATION DUMP: " << p.getGive() << " " << p.getTake() << " " << p.getSince() << endl;
		p.saySomething();
	}
	
	int abcd;
	cin >> abcd;
	return 0;
}