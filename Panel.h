#pragma once
#ifndef __PANEL__
#define __PANEL__

#include <vector>
#include <iostream>
#include "Control.h"

class Panel: public Control
{
	vector<Control*> children;


public:
	Panel();
	~Panel();

	void draw(Graphics& g, int x, int y, size_t z);
	void mousePressed(int x, int y, bool isLeft);
	void keyDown(int keyCode, char charecter);
	short getLeft();
	short getTop();
	void getAllControls(vector<Control*>* controls);
	void add(Control* ctl);
	bool canGetFocus() { return true; }	//?
};


#endif // !__PANEL__
