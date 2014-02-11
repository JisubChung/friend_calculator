#include "male.h"
#include <iostream>

male::male(string &name, int give, int take, int duration, int since)
{
	setName(name);
	setGive(give);
	setTake(take);
	setDuration(duration);
	setSince(since);
}

male::~male()
{
}

void male::saySomething()
{
	cout << "I am a male" << endl;
}
