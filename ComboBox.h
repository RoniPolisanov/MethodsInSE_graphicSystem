#pragma once
#ifndef __COMBOBOX__
#define __COMBOBOX__

#include <list>
#include "Control.h"
#include "Control.h"

class ComboBox: public Control {

	vector<string> options;
	size_t selected;
	bool isOpened = false;

public:
	ComboBox(int, vector<string>);
	~ComboBox();

	virtual void draw(Graphics, int, int, size_t);
	// only Enter or Space:
	virtual void mousePressed(int, int, DWORD);
	// only Up and Down:
	void keyDown(int keyCode, char charecter) {};
	size_t GetSelectedIndex()			{ return this->selected; }
	void SetSelectedIndex(size_t index) { this->selected = index; }
	//can be focused according to project's definition
	virtual bool canGetFocus()			{ return true; }	
};

#endif // __COMBOBOX
