// Copyright (c) 2017-2018 LG Electronics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef ARABIC_AUTOMATA_H
#define ARABIC_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class ArabicAutomata : public AutomataBase
{

public:
    ArabicAutomata()
    {
        m_keymap.clear();
        m_keymap.insert(0x21,QString(0x21));
        m_keymap.insert(0x22,QString(0x22));
        m_keymap.insert(0x23,QString(0x23));
        m_keymap.insert(0x24,QString(0x24));
        m_keymap.insert(0x25,QString(0x25));
        m_keymap.insert(0x26,QString(0x26));
        m_keymap.insert(0x27,QString(0x637));
        m_keymap.insert(0x28,QString(0x28));
        m_keymap.insert(0x29,QString(0x29));
        m_keymap.insert(0x2a,QString(0x2a));
        m_keymap.insert(0x2b,QString(0x2b));
        m_keymap.insert(0x2c,QString(0x648));
        m_keymap.insert(0x2d,QString(0x2d));
        m_keymap.insert(0x2e,QString(0x632));
        m_keymap.insert(0x2f,QString(0x638));
        m_keymap.insert(0x30,QString(0x660));
        m_keymap.insert(0x31,QString(0x661));
        m_keymap.insert(0x32,QString(0x662));
        m_keymap.insert(0x33,QString(0x663));
        m_keymap.insert(0x34,QString(0x664));
        m_keymap.insert(0x35,QString(0x665));
        m_keymap.insert(0x36,QString(0x666));
        m_keymap.insert(0x37,QString(0x667));
        m_keymap.insert(0x38,QString(0x668));
        m_keymap.insert(0x39,QString(0x669));
        m_keymap.insert(0x3a,QString(0x3a));
        m_keymap.insert(0x3b,QString(0x643));
        m_keymap.insert(0x3c,QString(0x2c));
        m_keymap.insert(0x3d,QString(0x3d));
        m_keymap.insert(0x3e,QString(0x2e));
        m_keymap.insert(0x3f,QString(0x61F));
        m_keymap.insert(0x61F,QString(0x3F));
        m_keymap.insert(0x40,QString(0x40));
        m_keymap.insert(0x41,QString(0x650));
        m_keymap.insert(0x42,QString(0xFEF5));
        m_keymap.insert(0x43,QString(0x7D));
        m_keymap.insert(0x44,QString(0x5D));
        m_keymap.insert(0x45,QString(0x64F));
        m_keymap.insert(0x46,QString(0x5B));
        m_keymap.insert(0x47,QString(0xFEF7));
        m_keymap.insert(0x48,QString(0x623));
        m_keymap.insert(0x49,QString(0xF7));
        m_keymap.insert(0x4a,QString(0x640));
        m_keymap.insert(0x4b,QString(0x60C));
        m_keymap.insert(0x4c,QString(0x2F));
        m_keymap.insert(0x4d,QString(0x2019));
        m_keymap.insert(0x4e,QString(0x622));
        m_keymap.insert(0x4f,QString(0xD7));
        m_keymap.insert(0x50,QString(0x61B));
        m_keymap.insert(0x51,QString(0x64E));
        m_keymap.insert(0x52,QString(0x64C));
        m_keymap.insert(0x53,QString(0x64D));
        m_keymap.insert(0x54,QString(0xFEF9));
        m_keymap.insert(0x55,QString(0x2018));
        m_keymap.insert(0x56,QString(0x7B));
        m_keymap.insert(0x57,QString(0x64B));
        m_keymap.insert(0x58,QString(0x652));
        m_keymap.insert(0x59,QString(0x625));
        m_keymap.insert(0x5a,QString(0x5a));
        m_keymap.insert(0x5b,QString(0x3E));
        m_keymap.insert(0x5c,QString(0x7C));
        m_keymap.insert(0x5d,QString(0x3C));
        m_keymap.insert(0x5e,QString(0x5e));
        m_keymap.insert(0x5f,QString(0x5f));
        m_keymap.insert(0x60,QString(0x630));
        m_keymap.insert(0x61,QString(0x634));
        m_keymap.insert(0x62,QString(0xFEFB));
        m_keymap.insert(0x63,QString(0x624));
        m_keymap.insert(0x64,QString(0x64A));
        m_keymap.insert(0x65,QString(0x62B));
        m_keymap.insert(0x66,QString(0x628));
        m_keymap.insert(0x67,QString(0x644));
        m_keymap.insert(0x68,QString(0x627));
        m_keymap.insert(0x69,QString(0x647));
        m_keymap.insert(0x6a,QString(0x62A));
        m_keymap.insert(0x6b,QString(0x646));
        m_keymap.insert(0x6c,QString(0x645));
        m_keymap.insert(0x6d,QString(0x629));
        m_keymap.insert(0x6e,QString(0x649));
        m_keymap.insert(0x6f,QString(0x62E));
        m_keymap.insert(0x70,QString(0x62D));
        m_keymap.insert(0x71,QString(0x636));
        m_keymap.insert(0x72,QString(0x642));
        m_keymap.insert(0x73,QString(0x633));
        m_keymap.insert(0x74,QString(0x641));
        m_keymap.insert(0x75,QString(0x639));
        m_keymap.insert(0x76,QString(0x631));
        m_keymap.insert(0x77,QString(0x635));
        m_keymap.insert(0x78,QString(0x621));
        m_keymap.insert(0x79,QString(0x63A));
        m_keymap.insert(0x7a,QString(0x626));
        m_keymap.insert(0x7b,QString(0x62C));
        m_keymap.insert(0x7c,QString(0x7c));
        m_keymap.insert(0x7d,QString(0x62F));
        m_keymap.insert(0x7e,QString(0x651));
        m_keymap.insert(0x651,QString(0x7E));
        m_keymap.insert(0x20,QString(0x20));
    }

    void setPreedit(const QString &preeditString, int cursorPos)
    {
        Q_UNUSED(cursorPos);
        m_surroundingText = preeditString;
    }

    bool isPredictionSupported()
    {
        return false;
    }

    static AutomataBase* create()
    {
        return new ArabicAutomata();
    }
};

#endif // ARABIC_AUTOMATA_H
