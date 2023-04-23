float kbToMb(long kbs) { return (float)kbs / 1024; }
float kbToGb(long kbs) { return (float)kbs / (1024 * 1024); }
float kbToPer(long kbs) { return (float)kbs / (1024 * 1024); }
float kbToPer(long obtainedKbs, long totalKbs) {
  return ((float)obtainedKbs / totalKbs) * 100;
}
