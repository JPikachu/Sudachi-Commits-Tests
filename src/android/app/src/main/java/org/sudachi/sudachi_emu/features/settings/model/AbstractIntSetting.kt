// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

package org.sudachi.sudachi_emu.features.settings.model

interface AbstractIntSetting : AbstractSetting {
    fun getInt(needsGlobal: Boolean = false): Int
    fun setInt(value: Int)
}
