#ifndef MODULE_HPP
#define MODULE_HPP

#include <gtkmm/box.h>
#include <gtkmm/label.h>
#include <gtkmm/widget.h>
#include <gtkmm/window.h>

class Module : public Gtk::Box {
public:
  Module();
  void setLabel(Glib::ustring text);

protected:
  Gtk::Label label;
};

#endif // MODULE_HPP
