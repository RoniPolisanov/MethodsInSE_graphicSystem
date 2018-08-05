#include <iostream>
#include "MessageBox.h"

using namespace std;

Messagebox::Messagebox(int width, int height) {
  this->width = width;
  this->height = height;
  this->border = BorderType::Double;
  this->showed = false;
}

void Messagebox::SetTitle(string title) {
  this->title = title;
}

void Messagebox::GetTitle() {
  return this->title; 
}

void Messagebox::SetText(string text) {
   this->text = text;
}

void Messagebox::GetText() {
  return this->text;
}

//no focus according to task definition
void Messagebox::canGetFocus() {
  return false;
}