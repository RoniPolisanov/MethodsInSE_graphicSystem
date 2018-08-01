#include "Button.h"

//button C'tor
Button::Button(int width) {
  this->width = width;
  this->height = 1;
  this->border = BorderType::Single;
  this->showed = true;
  this->value = "Submit";
}

void Button::SetValue(string value){ 
  this->value = value; 
} 

string Button::GetValue(){ 
  return this->value;
} 

bool Button::canGetFocus(){ 
  return false;
} 

void Button::keyDown(int keyCode, char character){ 
  this->graphics.clearScreen();
} 

void Button::draw(Graphics g, int x, int y, size_t z) {
  graphics.setBackground(this->background);
  graphics.setForeground(this->foreground);
  drawBackground();
  graphics.write(x, y, this->GetValue());
}