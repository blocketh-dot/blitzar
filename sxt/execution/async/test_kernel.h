#pragma once

#include <cstdint>

namespace sxt::xenb {
class stream;
}

namespace sxt::xena {
//--------------------------------------------------------------------------------------------------
// add_for_testing
//--------------------------------------------------------------------------------------------------
void add_for_testing(uint64_t* c, const xenb::stream& stream, uint64_t* a, uint64_t* b,
                     int n) noexcept;
} // namespace sxt::xena