#include <iostream>
#include <iup.h>

#ifndef BUTTON_H
#define BUTTON_H

using namespace std;

namespace iup {
class Button {

  string title;
  string size;

public:
  Ihandle *handle;
  string getTitle() const;
  Button &setTitle(const string &value);
  string getSize() const;
  Button &setSize(const string &value);

  Button &show();
  Button &hide();

//  onClick(Button self);


  Button();
  Button(Ihandle *handle);
};

}

#endif // BUTTON_H
