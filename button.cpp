#include <iup.h>
#include "include/button.h"

using namespace iup;

string Button::getSize() const { return size; }

Button &Button::setSize(const string &value) {
  size = value;
  IupSetAttribute(this->handle, "SIZE", &value[0]);
  return *this;
}

Button &Button::show() {
  IupShow(this->handle);
  return *this;
}

Button &Button::hide() {
  IupHide(this->handle);
  return *this;
}

//Button::onClick(Button self)
//{
//  IupSetCallback()
//}
string Button::getTitle() const { return title; }

Button &Button::setTitle(const string &value) {
  title = value;
  IupSetAttribute(this->handle, "TITLE", &value[0]);
  return *this;
}

Button::Button() { this->handle = IupButton(NULL, NULL); }

Button::Button(Ihandle *handle) : handle(handle) {}
