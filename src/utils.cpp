#include "include/utils.hpp"

float utils::kbToMb(long kbs) { return (float)kbs / 1024; }
float utils::kbToGb(long kbs) { return (float)kbs / (1024 * 1024); }
float utils::kbToPer(long obtainedKbs, long totalKbs) {
  return ((float)obtainedKbs / totalKbs) * 100;
}
