#pragma once
#include "Control.h"
#include "Button.h"

class Messagebox : public Control {

private:
  string title = "";
  string text = "";

public:
  Messagebox()            {}
  void keyDown(int, char) {}
  bool canGetFocus(); 
  Messagebox(int, int);
  void SetTitle(string title);
  void SetText(string text);
  string GetTitle();
  string GetText();
  void draw(Graphics, int, int, size_t);
  void mousePressed(int, int, DWORD);
  void addButton(Button&, int, int);
};

