#include "include/modules/memory.hpp"
#include "include/utils.hpp"
#include <cstdint>
#include <fstream>
#include <iostream>
#include <ostream>
#include <string>

Memory::Memory() {
  parseMemFile();
  update();
  setLabel(std::to_string(memTotal));

  // std::cout << kbToMb(30963453) << std::endl;
  // std::cout << kbToGb(30963453) << std::endl;
  // std::cout << kbToPer(30963453, 80961231) << std::endl;
}

void Memory::parseMemFile() {
  std::ifstream file("/proc/meminfo");
  std::string line;
  while (std::getline(file, line)) {
    int delimPos = line.find(':');
    std::string key = line.substr(0, delimPos);
    long value = std::stol(line.substr(delimPos + 1));
    memInfo[key] = value;
  }
}

void Memory::update() {
  memTotal = kbToGb(memInfo["MemTotal"]);
  memFree = memInfo["MemAvailable"];
  swapTotal = memInfo["SwapTotal"];
  swapFree = memInfo["SwapFree"];
}
