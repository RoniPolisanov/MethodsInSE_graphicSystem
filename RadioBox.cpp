#pragma once
#include "RadioBox.h"

RadioBox::RadioBox(int height, int width, vector<string> options) : CheckList(height, width, options) {
	this->toCheck = 0;
	this->height = height;
	this->width = width;
	this->options = options;
	this->showed = true;
}

// Drawing the RadioBox
void RadioBox::draw(Graphics g, int x, int y, size_t z) {
	// Setting Foreground and Background
	this->graphics.setBackground(this->background);
	this->graphics.setForeground(this->foreground);


	// Setting Foreground and Background to default
	this->graphics.setForeground(Color::White);
	this->graphics.setBackground(Color::Black);
}

void RadioBox::keyDown(int keyCode, char character) {

}

void RadioBox::mousePressed(int a, int b, DWORD button) {
	
};


