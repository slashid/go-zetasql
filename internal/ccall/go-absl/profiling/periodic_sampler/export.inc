#ifndef ABSL_PROFILING_PERIODIC_SAMPLER_EXPORT_H
#define ABSL_PROFILING_PERIODIC_SAMPLER_EXPORT_H

#include "absl/profiling/internal/periodic_sampler.h"

namespace absl {
  namespace profiling_internal {

    int64_t PeriodicSamplerBase::GetExponentialBiased(int period) noexcept {
      return 0;
    }

    bool PeriodicSamplerBase::SubtleConfirmSample() noexcept {
      return false;
    }
  }
}

#include "go-absl/base/core_headers/export.inc"
#include "go-absl/profiling/exponential_biased/export.inc"

#endif