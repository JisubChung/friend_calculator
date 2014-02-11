#ifndef FEMALE_INCLUDED
#define FEMALE_INCLUDED
#include "person.h"

using namespace std;

class female : public person
{
public:
	female(string &name, int give, int take, int duration, int since);
	~female();
	virtual void saySomething();
};

#endif