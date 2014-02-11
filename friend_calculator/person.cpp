#include "person.h"
#include <string>
#include <iostream>

//CONSTRUCTORS
person::person(string &name, int give, int take, int duration, int since)
{
	m_name = name;
	m_give = give;
	m_take = take;
	m_duration = duration;
	m_since = since;
}

person::person(){};

//DESTRUCTOR
person::~person()
{
}

//ACCESSORS
string person::getName()
{
	return m_name;
}
int person::getGive()
{
	return m_give;
}
int person::getTake()
{
	return m_take;
}
int person::getDuration()
{
	return m_duration;
}
int person::getSince()
{
	return m_since;
}

//MUTATORS
void person::setName(string &name)
{
	m_name = name;
}
void person::setGive(int give)
{
	m_give = give;
}
void person::setTake(int take)
{
	m_take = take;
}
void person::setDuration(int duration)
{
	m_duration = duration;
}
void person::setSince(int since)
{
	m_since = since;
}

//Functions
int person::evaluateFriend()
{
	int m_eval = (m_take-m_give)*(m_duration*365)-m_since;
	return (m_eval);
}

void person::saySomething()
{
	cout << "Am I a person?" << endl;
}