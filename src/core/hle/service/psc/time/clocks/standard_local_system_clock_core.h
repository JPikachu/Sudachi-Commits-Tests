// SPDX-FileCopyrightText: Copyright 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "core/hle/result.h"
#include "core/hle/service/psc/time/clocks/context_writers.h"
#include "core/hle/service/psc/time/clocks/steady_clock_core.h"
#include "core/hle/service/psc/time/clocks/system_clock_core.h"
#include "core/hle/service/psc/time/common.h"

namespace Service::PSC::Time {

class StandardLocalSystemClockCore : public SystemClockCore {
public:
    explicit StandardLocalSystemClockCore(SteadyClockCore& steady_clock)
        : SystemClockCore{steady_clock} {}
    ~StandardLocalSystemClockCore() override = default;

    void Initialize(const SystemClockContext& context, s64 time);
};

} // namespace Service::PSC::Time
