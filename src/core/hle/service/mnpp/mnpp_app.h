// SPDX-FileCopyrightText: Copyright 2022 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

namespace Core {
class System;
}

namespace Service::MNPP {

void LoopProcess(Core::System& system);

} // namespace Service::MNPP
