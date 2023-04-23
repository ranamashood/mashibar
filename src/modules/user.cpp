#include "include/modules/user.hpp"

User::User() { setLabel(getUserName()); }

Glib::ustring User::getUserName() { return g_get_user_name(); }
