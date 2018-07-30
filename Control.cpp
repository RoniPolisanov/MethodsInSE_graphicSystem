#include "Control.h"



using namespace std;
Control* Control::focus = 0;

void Control::setFocus(Control &control) {

  if (getFocus() != NULL) {
    getFocus()->SetForeground(Color::White);
    getFocus()->setLayer(0);
  }

  control.graphics.moveTo(control.getLeft(), control.getLeft());
  control.graphics.setCursorVisibility(true);
  focus = &control;
  control.setLayer(1);
  control.SetForeground(Color::Green);
}

void Control::SetForeground(Color color) {
  foreground = color;
  this->graphics.setForeground(color);
}