#include <iup.h>

#include "include/widget.h"

Widget &Widget::show() {
  IupShow(this->handle);
  return *this;
}

Widget &Widget::hide() {
  IupHide(this->handle);
  return *this;
}

Widget &Widget::append(Ihandle *child) {
  IupAppend(this->handle, child);
  return *this;
}

Widget::Widget() {}
