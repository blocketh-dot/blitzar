#pragma once

#include <cinttypes>

#include "sxt/base/container/span.h"

namespace sxt::sqcb { struct indexed_exponent_sequence; }
namespace sxt::rstt { class compressed_element; }
namespace sxt::c21t { struct element_p3; }

namespace sxt::sqcnv {

//--------------------------------------------------------------------------------------------------
// compute_commitments_gpu
//--------------------------------------------------------------------------------------------------
void compute_commitments_gpu(
    basct::span<rstt::compressed_element> commitments,
    basct::cspan<sqcb::indexed_exponent_sequence> value_sequences,
    basct::cspan<rstt::compressed_element> generators
) noexcept;

} // namespace sxt
