#include "include/client.hpp"
#include "gtkmm/button.h"
#include "include/modules/memory.hpp"
#include "include/modules/user.hpp"

Client::Client() {
  set_title("MashiBar");

  User user;
  Memory memory;

  Bar bar;
  bar.addModule(user);
  bar.addModule(memory);

  set_child(bar);
}
