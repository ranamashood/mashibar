#include "include/client.hpp"
#include <gtkmm/application.h>

int main(int argc, char *argv[]) {
  auto app = Gtk::Application::create("org.mashood.apps.mashi");

  return app->make_window_and_run<Client>(argc, argv);
}
