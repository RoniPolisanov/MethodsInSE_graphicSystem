#pragma once
#ifndef __COMBOBOX__
#define __COMBOBOX__

#include <iostream>
#include <list>
#include <string>
#include "Button.h"
//#include "TextBox";

using namespace std; 

class ComboBox
{
	// only one choice
	list<string,bool> choices;
	// after Elbaz create TextBox:
	//TextBox oneChoice;
	Button btnViewList;
public:
	ComboBox();
	~ComboBox();
};

#endif // __COMBOBOX__
