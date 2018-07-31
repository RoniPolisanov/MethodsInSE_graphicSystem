#pragma once
#include <string> 
#include "NumericBox.h"

NumericBox::NumericBox(int width, int min, int max) {
	this->width = width;
	this->height = 3;
	this->min = min;
	this->max = max;
	this->showed = true;
}

// Drawing the NumericBox
void NumericBox::draw(Graphics g, int x, int y, size_t z) {
	// Setting Foreground and Background
	this->graphics.setBackground(this->background);
	this->graphics.setForeground(this->foregrou
}

// Handling Mouse click event and operating it
void NumericBox::mousePressed(int x, int y, DWORD button) {
	this->graphics.setCursorVisibility(true);
	this->graphics.moveTo(x, y);

}
