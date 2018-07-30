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
	Button();
  
};

