#pragma once
#include "Control.h"

class ComboBox : public Control {

private:
	vector<string> options;
	size_t selected;
	bool isOpened = false;

public:
	ComboBox(int, vector<string>);
	size_t GetSelectedIndex()						{ return this->selected; }
	void SetSelectedIndex(size_t index) { this->selected = index; }
	//can be focused according to project's definition
	virtual bool canGetFocus()					{ return true; }
	virtual void draw(Graphics, int, int, size_t);
	// only Up and Down:
	virtual void keyDown(int, char);
	// only Enter or Space:
	virtual void mousePressed(int, int, DWORD);
};