#include "Panel.h"



Panel::Panel()
{
}


Panel::~Panel()
{
}


void Panel::draw(Graphics& g, int x, int y, size_t z) {

}

void Panel::mousePressed(int x, int y, bool isLeft) {
	// empty implementation !
}

void Panel::keyDown(int keyCode, char charecter) {
	// empty implementation !

}

short Panel::getLeft() { 
	// get left of panel
	return 0;
}

short Panel::getTop() { 
	// get top of panel

	return 0; 
}

void Panel::getAllControls(vector<Control*>* controls) {

}

void Panel::add(Control* ctl) {
	children.push_back(ctl);
}
