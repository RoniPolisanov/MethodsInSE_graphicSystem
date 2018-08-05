#pragma once
#include "Control.h"
#include "Button.h"

class Messagebox : public Control {

private:
  string title = "";
  string text = "";

public:
  Messagebox() {}
  Messagebox(int, int);
  void SetTitle(string title);
  string GetTitle();
  void SetText(string text);
  string GetText();
  bool canGetFocus(); 
  void draw(Graphics, int, int, size_t);
  void keyDown(int, char) {}
  void mousePressed(int, int, DWORD);
  void addButton(Button&, int, int);
};

