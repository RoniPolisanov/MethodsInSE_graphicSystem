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

void Button::mousePressed(){ 
  return true;
} 


void Button::draw(){ 
    for (int i = 0; i < options.size(); i++) {
      // do something
  }
} 