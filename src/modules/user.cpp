#include "include/modules/user.hpp"

modules::User::User() { setLabel(getUserName()); }

std::string modules::User::getUserName() { return g_get_user_name(); }
