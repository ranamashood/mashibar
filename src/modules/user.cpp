#include "include/modules/user.hpp"

User::User() { setLabel(getUserName()); }

std::string User::getUserName() { return g_get_user_name(); }
