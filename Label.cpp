//Authors: Haim Rlnaz ~ Roni Polisanov ~ Reut Leib ~ Yaniv Yona
#include "Label.h"

Label::Label(int _width) {
    this->width = _width;
    this->height = 1;
    this->showed = true;
}

void Label::draw(Graphics g, int i, int j, size_t p) {
	graphics.setBackground(this->background);
	graphics.setForeground(this->foreground);
	graphics.write(i, j, this->GetValue());
	graphics.setForeground(Color::White);
	graphics.setBackground(Color::Black);
}
