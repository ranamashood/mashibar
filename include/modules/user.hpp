#ifndef USER_HPP
#define USER_HPP

#include "include/module.hpp"
#include <gtkmm/window.h>

class User : public Module {
public:
  User();

protected:
  Glib::ustring getUserName();
};

#endif // USER_HPP
