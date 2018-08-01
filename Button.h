#pragma once

class Button;

struct MouseListener{
  virtual void MousePressed(Button &b, int x, int y, bool isLeft) = 0;
};

class Button : public Control {

private:
  string value;
  MouseListener* listener;

public:
	Button(int);
  void SetValue(string value);
  string GetValue();
  bool canGetFocus();
  void keyDown(int, char);
  void draw(Graphics, int, int, size_t);
};

