#include "include/bar.hpp"

Bar::Bar() { append(box); }

void Bar::addModule(Module &module) { box.append(module); }
