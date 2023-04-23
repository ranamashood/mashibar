#include "include/module.hpp"
#include <iostream>

Module::Module() {
  append(label);
  label.set_margin(10);
}

void Module::setLabel(Glib::ustring text) { label.set_label(text); }
