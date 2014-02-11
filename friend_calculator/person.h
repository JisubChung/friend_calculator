#ifndef PERSON_INCLUDED
#define PERSON_INCLUDED

#include <string>

using namespace std;

class person
{
public:
	//constructor
	person();
	person(string &name, int give, int take, int duration, int since);

	//destructor
	~person();

	//accessors
	string getName();
	int getGive();
	int getTake();
	int getDuration();
	int getSince();

	//mutator
	void setName(string &name);
	void setGive(int give);
	void setTake(int take);
	void setDuration(int duration);
	void setSince(int since);

	//helper functions?	
	int evaluateFriend();
	virtual void saySomething();

private:
	string m_name;	//Name of Friend
	int m_give;		//Cost of Friend
	int m_take;		//Taken from Friend
	int m_duration;	//Years known Friend
	int m_since;	//Days since talked to Friend
	int m_eval;
};

#endif