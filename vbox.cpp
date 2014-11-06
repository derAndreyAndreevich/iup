#include "include/vbox.h"
#include <iup.h>

VBox &VBox::append(Ihandle *child) {
  Widget::append(child);
  return *this;
}

VBox::VBox() { this->handle = IupVbox(nullptr); }
