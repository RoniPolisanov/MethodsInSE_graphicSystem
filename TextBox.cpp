#include <iostream>
#include "TextBox.h"

using namespace std;

//init TextBox
TextBox::TextBox(int width)
{
    this->width = width;
    this->height = 1;
    this->border = BorderType::Single;
    this->showed = true;
}

//draw textbox method
void TextBox::draw(Graphics g, int x, int y, size_t z)
{
    g.setBackground(this->background);
    g.setForeground(this->foreground);
    g.write(x, y, this->GetValue());
    g.setForeground(Color::White);
    g.setBackground(Color::Black);
}