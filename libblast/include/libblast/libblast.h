#pragma once

#include <string>
#ifdef _WIN32
#ifdef BLAST_EXPORTS
#define BLAST_API __declspec(dllexport)
#else
#define BLAST_API __declspec(dllimport)
#endif
#else
#define BLAST_API
#endif

namespace blast {

class BLAST_API Record {
public:
  const char *key;
  const char *value;

  Record();

  Record(std::string k, std::string v) {
    key = k.c_str();
    value = v.c_str();
  }
};

} // namespace blast
