#include <iostream>
#include <string>

using namespace std;

int main()
{
	string friendName;		//Name of Friend
	int friendCost;			//Cost of Friend
	int friendPrice;		//a second variable to get the cost
	int friendSince;		//Years known Friend
	int friendLastTalked;	//Days since talked to Friend
	string friendGender;	//Gender of Friend

	cout << "This program will tell how much a friend costs and how good of a friend they are!" << endl;
	cout << "Name of this friend? ";
	getline(cin, friendName);
	cout << "How much money have you spent on this friend? ";
	cin >> friendPrice;
	cout << "How much money has this friend spent on you? ";
	cin >> friendCost;
	friendCost += friendPrice;
	cout << "How long have you been friends with this friend? ";
	cin >> friendSince;
	cout << "How many days has it been since you talked to this friend? ";
	cin >> friendLastTalked;
	cout << "What gender is this friend (M/F)?" ;
	cin >> friendGender; //should change to getline probably
}