#include <iup.h>

#ifndef WIDGET_H
#define WIDGET_H

class Widget {

public:
  Ihandle *handle;

  Widget &show();
  Widget &hide();
  Widget &append(Ihandle *child);
  Widget();
};

#endif // WIDGET_H
