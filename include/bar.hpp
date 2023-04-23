#ifndef BAR_HPP
#define BAR_HPP

#include "include/module.hpp"
#include <gtkmm/box.h>

class Bar : public Gtk::Box {
public:
  Bar();
  void addModule(Module &module);

protected:
  Gtk::Box box;
};

#endif // BAR_HPP
