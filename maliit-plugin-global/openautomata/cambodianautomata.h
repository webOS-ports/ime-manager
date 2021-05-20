// Copyright (c) 2016-2018 LG Electronics, Inc.
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

#ifndef CAMBODIAN_AUTOMATA_H
#define CAMBODIAN_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class CambodianAutomata: public AutomataBase
{

public:
    CambodianAutomata() {
        m_accentSelect = false;

        m_accents.insert(QString(QChar(0x385)));
        m_accents.insert(QString(QChar(0x384)));
        m_accents.insert(QString(QChar(0x0A8)));

        addNumberKeys();
        addNormalKeys();
        addShiftedKeys();
        addSymbolKeys();
        addAltedKeys();
    }

    void setPreedit(const QString &preeditString, int cursorPos)
    {
        Q_UNUSED(cursorPos);
        m_surroundingText = preeditString;
    }

    bool isPredictionSupported()
    {
        return true;
    }

    static AutomataBase* create()
    {
        return new CambodianAutomata();
    }

private:
    void addSymbolKeys()
    {
        m_keymap.insert(0x60,QString(QChar(0x00AB)));
        m_keymap.insert(0x7e,QString(QChar(0x00BB)));
        m_keymap.insert(0x21,QString(QChar(0x0021)));
        m_keymap.insert(0x40,QString(QChar(0x17D7)));
        m_keymap.insert(0x23,QString(QChar(0x0022)));
        m_keymap.insert(0x24,QString(QChar(0x17DB)));
        m_keymap.insert(0x25,QString(QChar(0x0025)));
        m_keymap.insert(0x5e,QString(QChar(0x17CD)));
        m_keymap.insert(0x26,QString(QChar(0x17D0)));
        m_keymap.insert(0x2a,QString(QChar(0x17CF)));
        m_keymap.insert(0x28,QString(QChar(0x0028)));
        m_keymap.insert(0x29,QString(QChar(0x0029)));
        m_keymap.insert(0x2d,QString(QChar(0x17A5)));
        m_keymap.insert(0x3d,QString(QChar(0x17B2)));
        m_keymap.insert(0x5f,QString(QChar(0x17CC)));
        m_keymap.insert(0x2b,QString(QChar(0x003D)));
        m_keymap.insert(0x27,QString(QChar(0x17CB)));
        m_keymap.insert(0x3b,QString(QChar(0x17BE)));
        m_keymap.insert(0x3a,QString("\u17C4\u17C7"));
        m_keymap.insert(0x2c,QString("\u17BB\u17C6"));
        m_keymap.insert(0x22,QString(QChar(0x17C9)));
        m_keymap.insert(0x5b,QString(QChar(0x17C0)));
        m_keymap.insert(0x5c,QString(QChar(0x17AE)));
        m_keymap.insert(0x5d,QString(QChar(0x17AA)));
        m_keymap.insert(0x7b,QString(QChar(0x17BF)));
        m_keymap.insert(0x7c,QString(QChar(0x17AD)));
        m_keymap.insert(0x7d,QString(QChar(0x17A7)));
        m_keymap.insert(0x2e,QString(QChar(0x17D4)));
        m_keymap.insert(0x2f,QString(QChar(0x17CA)));
        m_keymap.insert(0x3c,QString("\u17BB\u17C7"));
        m_keymap.insert(0x3e,QString(QChar(0x17D5)));
        m_keymap.insert(0x3f,QString(QChar(0x003f)));
    }

    void addNumberKeys()
    {
        m_keymap.insert(0x30,QString(QChar(0x17E0)));
        m_keymap.insert(0x31,QString(QChar(0x17E1)));
        m_keymap.insert(0x32,QString(QChar(0x17E2)));
        m_keymap.insert(0x33,QString(QChar(0x17E3)));
        m_keymap.insert(0x34,QString(QChar(0x17E4)));
        m_keymap.insert(0x35,QString(QChar(0x17E5)));
        m_keymap.insert(0x36,QString(QChar(0x17E6)));
        m_keymap.insert(0x37,QString(QChar(0x17E7)));
        m_keymap.insert(0x38,QString(QChar(0x17E8)));
        m_keymap.insert(0x39,QString(QChar(0x17E9)));
    }

    void addShiftedKeys()
    {
        m_keymap.insert(0x41,QString("\u17B6\u17C6"));
        m_keymap.insert(0x42,QString(QChar(0x1796)));
        m_keymap.insert(0x43,QString(QChar(0x1787)));
        m_keymap.insert(0x44,QString(QChar(0x178C)));
        m_keymap.insert(0x45,QString(QChar(0x17C2)));
        m_keymap.insert(0x46,QString(QChar(0x1792)));
        m_keymap.insert(0x47,QString(QChar(0x17A2)));
        m_keymap.insert(0x48,QString(QChar(0x17C7)));
        m_keymap.insert(0x49,QString(QChar(0x17B8)));
        m_keymap.insert(0x4a,QString(QChar(0x1789)));
        m_keymap.insert(0x4b,QString(QChar(0x1782)));
        m_keymap.insert(0x4c,QString(QChar(0x17A1)));
        m_keymap.insert(0x4d,QString(QChar(0x17C6)));
        m_keymap.insert(0x4e,QString(QChar(0x178E)));
        m_keymap.insert(0x4f,QString(QChar(0x17C5)));
        m_keymap.insert(0x50,QString(QChar(0x1797)));
        m_keymap.insert(0x51,QString(QChar(0x1788)));
        m_keymap.insert(0x52,QString(QChar(0x17AC)));
        m_keymap.insert(0x53,QString(QChar(0x17C3)));
        m_keymap.insert(0x54,QString(QChar(0x1791)));
        m_keymap.insert(0x55,QString(QChar(0x17BC)));
        m_keymap.insert(0x56,QString("\u17C1\u17C7"));
        m_keymap.insert(0x57,QString(QChar(0x17BA)));
        m_keymap.insert(0x58,QString(QChar(0x1783)));
        m_keymap.insert(0x59,QString(QChar(0x17BD)));
        m_keymap.insert(0x5a,QString(QChar(0x178D)));
    }

    void addNormalKeys()
    {
        m_keymap.insert(0x61,QString(QChar(0x17B6)));
        m_keymap.insert(0x62,QString(QChar(0x1794)));
        m_keymap.insert(0x63,QString(QChar(0x1785)));
        m_keymap.insert(0x64,QString(QChar(0x178A)));
        m_keymap.insert(0x65,QString(QChar(0x17C1)));
        m_keymap.insert(0x66,QString(QChar(0x1790)));
        m_keymap.insert(0x67,QString(QChar(0x1784)));
        m_keymap.insert(0x68,QString(QChar(0x17A0)));
        m_keymap.insert(0x69,QString(QChar(0x17B7)));
        m_keymap.insert(0x6a,QString(QChar(0x17D2)));
        m_keymap.insert(0x6b,QString(QChar(0x1780)));
        m_keymap.insert(0x6c,QString(QChar(0x179B)));
        m_keymap.insert(0x6d,QString(QChar(0x1798)));
        m_keymap.insert(0x6e,QString(QChar(0x1793)));
        m_keymap.insert(0x6f,QString(QChar(0x17C4)));
        m_keymap.insert(0x70,QString(QChar(0x1795)));
        m_keymap.insert(0x71,QString(QChar(0x1786)));
        m_keymap.insert(0x72,QString(QChar(0x179A)));
        m_keymap.insert(0x73,QString(QChar(0x179F)));
        m_keymap.insert(0x74,QString(QChar(0x178F)));
        m_keymap.insert(0x75,QString(QChar(0x17BB)));
        m_keymap.insert(0x76,QString(QChar(0x179C)));
        m_keymap.insert(0x77,QString(QChar(0x17B9)));
        m_keymap.insert(0x78,QString(QChar(0x1781)));
        m_keymap.insert(0x79,QString(QChar(0x1799)));
        m_keymap.insert(0x7a,QString(QChar(0x178B)));
        m_keymap.insert(0x20,QString(QChar(0x0020)));
    }

    void addAltedKeys()
    {
        m_keymap.insert(0xC3,QString("\u200D"));
        m_keymap.insert(0xA0,QString("\u200C"));
        m_keymap.insert(0xAC,QString("\u200B"));
        m_keymap.insert(0xAD,QString("\u00A0"));
        m_keymap.insert(0xA1,QString(QChar(0x0040)));
        m_keymap.insert(0xA2,QString(QChar(0x17D1)));
        m_keymap.insert(0xA3,QString(QChar(0x0024)));
        m_keymap.insert(0xA4,QString(QChar(0x20AC)));
        m_keymap.insert(0xA5,QString(QChar(0x17D9)));
        m_keymap.insert(0xA6,QString(QChar(0x17DA)));
        m_keymap.insert(0xA7,QString(QChar(0x002A)));
        m_keymap.insert(0xA8,QString(QChar(0x007B)));
        m_keymap.insert(0xA9,QString(QChar(0x007D)));
        m_keymap.insert(0xAA,QString(QChar(0x00D7)));
        m_keymap.insert(0xAB,QString(QChar(0x17CE)));
        m_keymap.insert(0xAF,QString(QChar(0x17AF)));
        m_keymap.insert(0xB0,QString(QChar(0x17AB)));
        m_keymap.insert(0xB3,QString(QChar(0x17A6)));
        m_keymap.insert(0xB4,QString(QChar(0x17B1)));
        m_keymap.insert(0xB5,QString(QChar(0x17B0)));
        m_keymap.insert(0xB6,QString(QChar(0x17A9)));
        m_keymap.insert(0xB7,QString(QChar(0x17B3)));
        m_keymap.insert(0xC1,QString(QChar(0x17D6)));
        m_keymap.insert(0xC2,QString(QChar(0x17C8)));
        m_keymap.insert(0xC4,QString(QChar(0x005C)));
        m_keymap.insert(0xCC,QString(QChar(0x002C)));
        m_keymap.insert(0xCD,QString(QChar(0x002E)));
        m_keymap.insert(0xCE,QString(QChar(0x002F)));
    }
};
#endif //CAMBODIAN_AUTOMATA_H

