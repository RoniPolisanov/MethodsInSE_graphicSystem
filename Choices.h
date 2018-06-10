#pragma once
#ifndef __CHOICES__
#define __CHOICES__

#include <iostream>
#include <string>

using namespace std;


class Choices
{
	string value;
	bool selected;
public:
	Choices(string _value);
	~Choices();
};

#endif // !__CHOICES__
