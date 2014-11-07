#include <iostream>
#include <iup.h>
#include "widget.h"

#ifndef DIALOG_H
#define DIALOG_H

using namespace std;

namespace iup {
class Dialog {
  string title;
  string size;

public:
  Ihandle *handle;
  Dialog &setTitle(string title);
  Dialog &setSize(string size);
  string getTitle();
  string getSize();

  Dialog &show();
  Dialog &hide();
  Dialog &append(Ihandle *child);

  Dialog();
};
}
#endif // DIALOG_H
