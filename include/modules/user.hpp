#ifndef USER_HPP
#define USER_HPP

#include "include/module.hpp"
#include <gtkmm/window.h>

namespace modules {
class User : public Module {
public:
  User();

protected:
  std::string getUserName();
};
} // namespace modules

#endif // USER_HPP
