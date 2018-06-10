#pragma once
#ifndef __TEXTBOX__
#define __TEXTBOX__

#include <iostream>
#include "Label.h"

class TextBox : public Control
{
private: 
	Label label;
	int x;
	int y;
	int limit;
	string value;
public:
	TextBox(string _label, int _posX, int _posY, int _limit) : label(Label::Label(_label)), x(_posX), y(_posY), limit(_limit), value("") {};	//constructor
	
	void draw(Graphics& g, int x, int y, size_t z);
	~TextBox();
};

#endif // !__TEXTBOX__
