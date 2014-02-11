#include "female.h"
#include <iostream>

female::female(string &name, int give, int take, int duration, int since)
{
	setName(name);
	setGive(give);
	setTake(take);
	setDuration(duration);
	setSince(since);
}

female::~female()
{
}

void female::saySomething()
{
	cout << "I am a female" << endl;
}