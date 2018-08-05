#include <iostream>
#include "MessageBox.h"

using namespace std;

Messagebox::Messagebox(int width, int height) {
	this->width = width;
	this->height = height;
	this->border = BorderType::Double;
	this->showed = false;
}

// Drawing the MessageBox
void Messagebox::draw(Graphics g, int x, int y, size_t z) {
	// Setting Foreground and Background
	this->graphics.setBackground(this->background);
	this->graphics.setForeground(this->foreground);

	this->drawBackground();
	this->graphics.write(x, y, this->GetTitle());
	this->graphics.write(x, y + 2, this->GetText());

	for (int i = 0; i < this->buttons.size(); ++i) {
		if (buttons[i]->getShowed() == true) {
			buttons[i]->draw(this->graphics, buttons[i]->getLeft(), buttons[i]->getTop(), 0);
			buttons[i]->drawBorder(buttons[i]->getBorder());
		}
	}
}

// Mouse click event
void Messagebox::mousePressed(int x, int y, DWORD button) {
	for (int i = 0; i < this->buttons.size(); ++i) {
		if (isInside(x, y, this->buttons[i]->getLeft(), this->buttons[i]->getTop(), this->buttons[i]->getWidth(), this->buttons[i]->getHeight())){
			this->buttons[i]->mousePressed(x, y, button);
			break;
		}
	}
};

// Add button to display
void Messagebox::addButton(Button &button, int left, int top) {
	this->buttons.push_back(&button);
	button.setLeft(this->getLeft() + left);
	button.setTop(this->getTop() + top);
}

