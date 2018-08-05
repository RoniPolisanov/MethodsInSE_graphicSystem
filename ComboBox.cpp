#include "ComboBox.h"

ComboBox::ComboBox(int width, vector<string> options) {
  this->width = width;
  this->height = 1;
  this->options = options;
  this->showed = true;
}

void ComboBox::keyDown(int keyCode, char character) {
  int position = this->getTop() + this->GetSelectedIndex() + 1;
  int index = this->GetSelectedIndex();
  int iBefore = index;
  int c;
  while (1) {
    c = getchar();
    if (c == VK_UP) {
      if (position <= this->getTop() + 1) {}
      else {
        --position;
        --index;
      }
    }

    if (c == VK_DOWN) {
      if (position >= this->getTop() + this->options.size() + 1) {}
      else {
        ++position;
        ++index;
      }
    }
    if (c == VK_TAB || c == VK_RETURN) {
      break;
    }
  }
  this->SetSelectedIndex(index);
  if (index != iBefore)
    this->height -= options.size();
  this->isOpened = false;
}