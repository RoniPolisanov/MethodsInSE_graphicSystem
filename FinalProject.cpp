#include "Graphics.h"
#include "Label.h"
#include "EventEngine.h"
#include <iostream>
#include "TextBox.h"

using namespace std;


int main(int argc, char** argv)
{
	Label l("Hello World");
	Control& l2 = l;
	EventEngine e;
	e.run(l2);

	TextBox txtbox("this is value", "TextBox Label");
	Control& txtboxctrl = txtbox;
	EventEngine txtboxeng;
	txtboxeng.run(txtboxctrl);
	getchar();
}