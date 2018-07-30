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
	Control()										{}
	~Control()										{}
	inline void Show()								{ this->showed = true; }
	inline void Hide()								{ this->showed = false; }
	inline void setLeft(int left)					{ this->left = left; }
	inline void setTop(int top)						{ this->top = top; }
	inline void setLayer(size_t layer)				{ this->layer = layer; }
	inline void SetBorder(BorderType border)		{ this->border = border; }
	inline int getLeft()							{ return this->left; }
	inline int getTop()								{ return this->top; }
	inline int getWidth()							{ return this->width; }
	inline int getHeight()							{ return this->height; }
	inline bool getShowed()							{ return this->showed; }
	inline size_t getLayer()						{ return this->layer; }
	virtual void draw(Graphics, int, int, size_t) = 0;
	virtual void mousePressed(int, int, DWORD) = 0;
	virtual void keyDown(int, char) = 0;
	virtual bool canGetFocus() = 0;
	static void setFocus(Control&);
	virtual void SetForeground(Color);

};

#endif //!__CONTROL__

