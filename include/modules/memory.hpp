#ifndef MEMORY_HPP
#define MEMORY_HPP

#include "include/module.hpp"
#include <gtkmm/window.h>
#include <string>
#include <unordered_map>

class Memory : public Module {
public:
  Memory();

protected:
  void parseMemFile();
  void update();

  std::unordered_map<std::string, long> memInfo;

  float memTotal, memFree, swapTotal, swapFree;
};

#endif // MEMORY_HPP
