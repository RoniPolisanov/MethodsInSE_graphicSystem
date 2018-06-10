#pragma once
#ifndef __COMBOBOX__
#define __COMBOBOX__

#include <list>
#include "Control.h"
#include "EventEngine.h"
#include "Button.h"
#include "Choices.h"
//#include "TextBox";


class ComboBox: public Control
{
	/// only one choice
	string value = NULL;
	list<Choices> choices;
	/// after Elbaz create TextBox:
	//TextBox oneChoice;
	Button btnViewList;
	/// not shore if we need that:
	//bool isVisabilityList;
	bool isOpenedList;
	EventEngine f;

public:
	ComboBox();
	~ComboBox();

	void draw(Graphics& g, int x, int y, size_t z) { };
	// only Enter or Space:
	void mousePressed(int x, int y, bool isLeft) {};
	// only Up and Down:
	void keyDown(int keyCode, char charecter) {};
	short getLeft() { return 0; };
	short getTop() { return 0; };
};

#endif // __COMBOBOX
