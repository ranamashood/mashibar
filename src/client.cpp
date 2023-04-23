#include "include/client.hpp"
#include "gtkmm/button.h"
#include "include/modules/user.hpp"

Client::Client() {
  set_title("MashiBar");

  User user;

  Bar bar;
  bar.addModule(user);

  set_child(bar);
}
