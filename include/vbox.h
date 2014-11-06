#ifndef VBOX_H
#define VBOX_H

#include "widget.h"

class VBox: public Widget
{
public:
  VBox &append(Ihandle *child);
  VBox();
};

#endif // VBOX_H
