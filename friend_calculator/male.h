#ifndef MALE_INCLUDED
#define MALE_INCLUDED
#include "person.h"

using namespace std;

class male: public person
{
public:
	male(string &name, int give, int take, int duration, int since);
	~male();
	virtual void saySomething();
};

#endif