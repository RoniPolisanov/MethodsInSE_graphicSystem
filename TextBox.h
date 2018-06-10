#pragma once
#ifndef __TEXTBOX__
#define __TEXTBOX__

#include "Label.h"
#include "Panel.h"
using namespace std;

class TextBox : public Panel
{
private: 
	string value;
	Label* txtLabel;
public:
	//TextBox() {}
	//TextBox(string _value, string _txtLabel);
	~TextBox() {};
	//Label* getLabel() { return txtLabel; }
	//void setLabel(Label* _txtLabel) { txtLabel = _txtLabel; }
	//string getValue() {	return value; }
	//void setValue(string _value) { value = _value; }
	//void draw(Graphics& g, int x, int y, size_t z);
	//bool myPureFunction() { return true; }
};
#endif //!__TEXBOX__