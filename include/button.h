#include <iostream>

#include "widget.h"

#ifndef BUTTON_H
#define BUTTON_H

using namespace std;

class Button : public Widget {
  string title;
  string size;


public:
  Button &setTitle(string title);
  Button &setSize(string size);
  string getTitle();
  string getSize();

  Button &show();
  Button &hide();
  Button &append(Ihandle *child);

  Button();
};

#endif // BUTTON_H
