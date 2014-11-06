#include <iup.h>
#include "include/button.h"

Button &Button::setTitle(string title) {
  this->title = title;
  IupSetAttribute(this->handle, "TITLE", &title[0]);
  return *this;
}

Button &Button::setSize(string size) {
  this->size = size;
  IupSetAttribute(this->handle, "SIZE", &size[0]);
  return *this;
}

string Button::getTitle() { return this->title; }

string Button::getSize() { return this->size; }

Button &Button::show() {
  Widget::show();
  return *this;
}

Button &Button::hide() {
  Widget::hide();
  return *this;
}

Button &Button::append(Ihandle *child) {
  Widget::append(child);
  *this;
}

Button::Button() { this->handle = IupButton(NULL, NULL); }
