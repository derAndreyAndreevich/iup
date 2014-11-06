#include <iostream>
#include <iup.h>
#include "include/iupgui.h"

using namespace std;

int main() {
  //    iup::Widget widget;
  IupOpen(NULL, NULL);
  cout << "Open <IUP>" << endl;
  Dialog dialog;
  Button button;

  //  Dialog dialog;
  //  auto dialog = new Dialog();
  //  new Dialog().setSize("100x100").setTitle("hello").show();
  dialog.setTitle("hello world").setSize("100x100").append(button.setSize("30x30").setTitle("...").handle).show();

  //  iup::Widget dialog;

  //  Ihandle *dialog = IupDialog(NULL);
  //  Ihandle *button = IupButton("button1", NULL);

  //  IupAppend(dialog, button);
  //  IupSetAttribute(dialog, "SIZE", "100x100");
  //  IupSetAttribute(dialog, "TITLE", "HELLO");
  //  IupShow(dialog);

  IupMainLoop();

  return 0;
}
