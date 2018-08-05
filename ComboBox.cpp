#include "ComboBox.h"

ComboBox::ComboBox(int width, vector<string> options) {
  this->width = width;
  this->height = 1;
  this->options = options;
  this->showed = true;
}

ComboBox::~ComboBox()
{
}
