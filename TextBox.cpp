#include "TextBox.h"

TextBox::TextBox(string _value, string _txtLabel) /* : txtLabel(Label::Label(_txtLabel)), value(_value)*/
{
	value = _value;
	txtLabel = new Label(_txtLabel);
}

//void TextBox::draw(Graphics& g, int x, int y, size_t z) /
//{
//	if (!z)
//		g.write(value);
}
