#ifndef __LABEL__
#define __LABEL__

#include "Control.h"
#include <string>

class Label: public Control
{   
    private:
        string value;
    public:
		
        Label(string);
        string getValue();
        void setValue(string);
        void draw(Graphics& g, int x, int y, size_t z);
};

#endif // !__LABEL__
