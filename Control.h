#pragma once

#pragma once
#include <vector>
#include "Graphics.h"

enum class BorderType		{ Single, Double, None };
enum class ForegroundColor	{ Red, Blue, Green, Purple, Yellow, White, Black };
enum class BackgroundColor	{ Red, Blue, Green, Purple, Yellow, White, Black };

class Control {

protected:
	int left, top, width, height;
	bool showed;
	static Control* focus;
	size_t layer = 0;
	BorderType border = BorderType::None;
	Graphics graphics;
	Color foreground = Color::White, background = Color::Black;
	
public:
	Control();
	static Control* getFocus() { return NULL; };
	static void setFocus(Control& control) {};
	

	virtual void draw(Graphics& g, int x, int y, size_t z) {}
	virtual void mousePressed(int x, int y, bool isLeft) {}
	virtual void keyDown(int keyCode, char charecter) {}
	virtual short getLeft() { return 0; }
	virtual short getTop() { return 0; }
	virtual void getAllControls(vector<Control*>* controls) {}
	virtual bool canGetFocus() { return true; }

	~Control();
};

#endif //!__CONTROL__

