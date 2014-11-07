#include <iup.h>

#include "include/dialog.h"

using namespace iup;

Dialog::Dialog() { this->handle = IupDialog(NULL); }

Dialog &Dialog::setTitle(string title) {
  this->title = title;
  IupSetAttribute(this->handle, "TITLE", &title[0]);
  return *this;
}

Dialog &Dialog::setSize(string size) {
  this->size = size;
  IupSetAttribute(this->handle, "SIZE", &size[0]);
  return *this;
}

string Dialog::getTitle() { return this->title; }

string Dialog::getSize() { return this->size; }

Dialog &Dialog::show() {
  IupShow(this->handle);
  return *this;
}

Dialog &Dialog::hide() {
  IupHide(this->handle);
  return *this;
}

Dialog &Dialog::append(Ihandle *child) {
  IupAppend(this->handle, child);
  return *this;
}
