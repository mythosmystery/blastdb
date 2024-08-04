#include <cstdlib>
#define BLAST_EXPORTS

#include "libblast/libblast.h"

namespace blast {

Record::Record() {
  key = nullptr;
  value = nullptr;
}

} // namespace blast
