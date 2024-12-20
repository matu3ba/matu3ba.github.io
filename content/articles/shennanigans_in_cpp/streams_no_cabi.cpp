#include <cstdint>
#include <fstream>
#include <iostream>
#include <vector>
void stream_cpp() {
  std::vector<uint8_t> array{1, 0, 0, 0};
  std::fstream fstream1{stdout, std::fstream::app | std::fstream::out};
  auto flags = fstream1.flags();
  fstream1 << std::hex;
  for (uint32_t i = 0; i < array.size(); i += 1)
    fstream1 << std::hex << array[i];
  fstream1.flags(flags);
  fstream1 << "\n";
  fstream1.close();
}
void fprintf_c() {
  std::vector<uint8_t> array{1, 0, 0, 0};
  for (uint32_t i = 0; i < array.size(); i += 1)
    fprintf(stdout, "%x, ", array[i]);
  fprintf(stdout, "\n");
}
