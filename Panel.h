#pragma once
#ifndef __PANEL__
#define __PANEL__
#include "Control.h"
#include "Graphics.h"
#include "Label.h"

class Panel : Control
{
private: 
	vector<Panel*>* Panels;
	Label label;
public:
	Panel();
	//void addPanel(Panel* panelToAdd) {};
	//vector<Panel*>* getPanels() { return Panels; };
	//void removePanel(); - no need to implement
	//getallPanels - implemented in control
	//drawPanel - implemented in control
	//createPanel - needs to be implemented at main - create it and add
	//getcontroller - implemented in EventEngine ~ moveFocus
	//drawController - implemented in control - each controller has control
	~Panel();
};

#endif //!__PANEL__

