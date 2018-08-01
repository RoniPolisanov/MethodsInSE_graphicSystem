#include <iostream>
#include <typeinfo>
#include "Panel.h"

using namespace std;

Panel::Panel(int _height, int _width) {
	this->height = _height;
	this->width = _width;
	this->showed = true;
}

void Panel::addControl(Control& control, int left, int top) {
	this->controls.push_back(&control);
	control.setLeft(left);
	control.setTop(top);
}

void Panel::draw(Graphics g, int x, int y, size_t z) {

}

void Panel::mousePressed(int x, int y, DWORD button) {
	for (int i = 0; i < this->controls.size(); i++) {
		if (isInside(x, y, this->controls[i]->getLeft(), this->controls[i]->getTop(), this->controls[i]->getWidth(), this->controls[i]->getHeight())){
			if (controls[i]->canGetFocus())
				setFocus(*this->controls[i]);
			this->controls[i]->mousePressed(x, y, button);
			break;
		}
	}
};



