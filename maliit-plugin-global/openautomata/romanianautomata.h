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

#ifndef ROMANIAN_AUTOMATA_H
#define ROMANIAN_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class RomanianAutomata : public AutomataBase
{

public:
    RomanianAutomata()
    {
        m_accentSelect = false;
        m_accents.insert(QString(QChar(0x02C7)));
        m_accents.insert(QString(QChar(0x005E)));
        m_accents.insert(QString(QChar(0x02D8)));
        m_accents.insert(QString(QChar(0x02DA)));
        m_accents.insert(QString(QChar(0x02DB)));
        m_accents.insert(QString(QChar(0x02D9)));
        m_accents.insert(QString(QChar(0x00B4)));
        m_accents.insert(QString(QChar(0x02DD)));
        m_accents.insert(QString(QChar(0x00A8)));
        m_accents.insert(QString(QChar(0x00B8)));
        m_accents.insert(QString(QChar(0x0060)));

        addNumberKeys();
        addNormalKeys();
        addShiftedKeys();
        addSymbolKeys();
        addAltedKeys();
        addAccentKeysForVKB();

        addCaronAccentForHID();
        addCircumFlexAccentForHID();
        addBreveAccentForHID();
        addRingAboveAccentForHID();
        addOGONEKAccentForHID();
        addDotAboveAccentForHID();
        addAcuteAccentForHID();
        addDoubleAcuteAccentForHID();
        addDiaeresisAccentForHID();
        addCedillaAccentForHID();
        addGraveAccentKeysForHID();
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
        return new RomanianAutomata();
    }

private:
    void addNumberKeys()
    {
        m_keymap.insert(0x31,QString(QChar(0x31)));
        m_keymap.insert(0x32,QString(QChar(0x32)));
        m_keymap.insert(0x33,QString(QChar(0x33)));
        m_keymap.insert(0x34,QString(QChar(0x34)));
        m_keymap.insert(0x35,QString(QChar(0x35)));
        m_keymap.insert(0x36,QString(QChar(0x36)));
        m_keymap.insert(0x37,QString(QChar(0x37)));
        m_keymap.insert(0x38,QString(QChar(0x38)));
        m_keymap.insert(0x39,QString(QChar(0x39)));
        m_keymap.insert(0x30,QString(QChar(0x30)));
    }

    void addNormalKeys()
    {
        m_keymap.insert(0x71,QString(QChar(0x71)));
        m_keymap.insert(0x77,QString(QChar(0x77)));
        m_keymap.insert(0x65,QString(QChar(0x65)));
        m_keymap.insert(0x72,QString(QChar(0x72)));
        m_keymap.insert(0x74,QString(QChar(0x74)));
        m_keymap.insert(0x79,QString(QChar(0x79)));
        m_keymap.insert(0x75,QString(QChar(0x75)));
        m_keymap.insert(0x69,QString(QChar(0x69)));
        m_keymap.insert(0x6F,QString(QChar(0x6F)));
        m_keymap.insert(0x70,QString(QChar(0x70)));
        m_keymap.insert(0X61,QString(QChar(0X61)));
        m_keymap.insert(0x73,QString(QChar(0x73)));
        m_keymap.insert(0x64,QString(QChar(0x64)));
        m_keymap.insert(0x66,QString(QChar(0x66)));
        m_keymap.insert(0x67,QString(QChar(0x67)));
        m_keymap.insert(0x68,QString(QChar(0x68)));
        m_keymap.insert(0x6A,QString(QChar(0x6A)));
        m_keymap.insert(0x6B,QString(QChar(0x6B)));
        m_keymap.insert(0x6C,QString(QChar(0x6C)));
        m_keymap.insert(0x7A,QString(QChar(0x7A)));
        m_keymap.insert(0x78,QString(QChar(0x78)));
        m_keymap.insert(0x63,QString(QChar(0x63)));
        m_keymap.insert(0x76,QString(QChar(0x76)));
        m_keymap.insert(0x62,QString(QChar(0x62)));
        m_keymap.insert(0x6E,QString(QChar(0x6E)));
        m_keymap.insert(0x6D,QString(QChar(0x6D)));
        m_keymap.insert(0x2C,QString(QChar(0x2C)));
        m_keymap.insert(0x2E,QString(QChar(0x2E)));
        m_keymap.insert(0x2F,QString(QChar(0x2D)));
        m_keymap.insert(0x20,QString(QChar(0x20)));
        m_keymap.insert(0x401,QString(QChar(0x40)));
    }

    void addShiftedKeys()
    {
        m_keymap.insert(0x51,QString(QChar(0x51)));
        m_keymap.insert(0x57,QString(QChar(0x57)));
        m_keymap.insert(0x45,QString(QChar(0x45)));
        m_keymap.insert(0x52,QString(QChar(0x52)));
        m_keymap.insert(0x54,QString(QChar(0x54)));
        m_keymap.insert(0x59,QString(QChar(0x59)));
        m_keymap.insert(0x55,QString(QChar(0x55)));
        m_keymap.insert(0x49,QString(QChar(0x49)));
        m_keymap.insert(0x4F,QString(QChar(0x4F)));
        m_keymap.insert(0x50,QString(QChar(0x50)));
        m_keymap.insert(0x41,QString(QChar(0x41)));
        m_keymap.insert(0x53,QString(QChar(0x53)));
        m_keymap.insert(0x44,QString(QChar(0x44)));
        m_keymap.insert(0x46,QString(QChar(0x46)));
        m_keymap.insert(0x47,QString(QChar(0x47)));
        m_keymap.insert(0x48,QString(QChar(0x48)));
        m_keymap.insert(0x4A,QString(QChar(0x4A)));
        m_keymap.insert(0x4B,QString(QChar(0x4B)));
        m_keymap.insert(0x4C,QString(QChar(0x4C)));
        m_keymap.insert(0x5A,QString(QChar(0x5A)));
        m_keymap.insert(0x58,QString(QChar(0x58)));
        m_keymap.insert(0x43,QString(QChar(0x43)));
        m_keymap.insert(0x56,QString(QChar(0x56)));
        m_keymap.insert(0x42,QString(QChar(0x42)));
        m_keymap.insert(0x4E,QString(QChar(0x4E)));
        m_keymap.insert(0x4D,QString(QChar(0x4D)));
    }

    void addSymbolKeys()
    {
        m_keymap.insert(0x60,QString(QChar(0x005D)));
        m_keymap.insert(0x7E,QString(QChar(0x005B)));
        m_keymap.insert(0x21,QString(QChar(0x0021)));
        m_keymap.insert(0x40,QString(QChar(0x0022)));
        m_keymap.insert(0x23,QString(QChar(0x0023)));
        m_keymap.insert(0x24,QString(QChar(0x00A4)));
        m_keymap.insert(0x25,QString(QChar(0x0025)));
        m_keymap.insert(0x5E,QString(QChar(0x0026)));
        m_keymap.insert(0x26,QString(QChar(0x002F)));
        m_keymap.insert(0x2A,QString(QChar(0x0028)));
        m_keymap.insert(0x28,QString(QChar(0x0029)));
        m_keymap.insert(0x29,QString(QChar(0x003D)));
        m_keymap.insert(0x2D,QString(QChar(0x002B)));
        m_keymap.insert(0x5F,QString(QChar(0x003F)));
        m_keymap.insert(0x3D,QString(QChar(0x0027)));
        m_keymap.insert(0x2B,QString(QChar(0x002A)));
        m_keymap.insert(0x5C,QString(QChar(0x00E2)));
        m_keymap.insert(0x7C,QString(QChar(0x00C2)));
        m_keymap.insert(0x5B,QString(QChar(0x0103)));
        m_keymap.insert(0x7B,QString(QChar(0x0102)));
        m_keymap.insert(0x5D,QString(QChar(0x00EE)));
        m_keymap.insert(0x7D,QString(QChar(0x00CE)));
        m_keymap.insert(0x3B,QString(QChar(0x015F)));
        m_keymap.insert(0x3A,QString(QChar(0x015E)));
        m_keymap.insert(0x27,QString(QChar(0x0162)));
        m_keymap.insert(0x22,QString(QChar(0x0119)));
        m_keymap.insert(0x2C,QString(QChar(0x002C)));
        m_keymap.insert(0x2E,QString(QChar(0x002E)));
        m_keymap.insert(0x2F,QString(QChar(0x002D)));
        m_keymap.insert(0x3C,QString(QChar(0x003B)));
        m_keymap.insert(0x3E,QString(QChar(0x003A)));
        m_keymap.insert(0x3F,QString(QChar(0x005F)));
    }

    void addAltedKeys()
    {
        m_keymap.insert(0xC3,QString("\\`"));
        m_keymap.insert(0xA0,QString(QChar(0x007E)));
        m_keymap.insert(0xA1,QString(QChar(0x02C7)));
        m_keymap.insert(0xA2,QString(QChar(0x005E)));
        m_keymap.insert(0xA3,QString(QChar(0x02D8)));
        m_keymap.insert(0xA4,QString(QChar(0x02DA)));
        m_keymap.insert(0xA5,QString(QChar(0x02DB)));
        m_keymap.insert(0xA6,QString(QChar(0x0060)));
        m_keymap.insert(0xA7,QString(QChar(0x02D9)));
        m_keymap.insert(0xA8,QString(QChar(0x00B4)));
        m_keymap.insert(0xA9,QString(QChar(0x02DD)));
        m_keymap.insert(0xAA,QString(QChar(0x00A8)));
        m_keymap.insert(0xAB,QString(QChar(0x00B8)));
        m_keymap.insert(0xAE,QString(QChar(0x20AC)));
        m_keymap.insert(0xB5,QString(QChar(0x00A7)));
        m_keymap.insert(0xB6,QString(QChar(0x005B)));
        m_keymap.insert(0xB7,QString(QChar(0x005D)));
        m_keymap.insert(0xC4,QString(QChar(0x005C)));
        m_keymap.insert(0xB9,QString(QChar(0x00DF)));
        m_keymap.insert(0xBA,QString(QChar(0x0111)));
        m_keymap.insert(0xC0,QString(QChar(0x0141)));
        m_keymap.insert(0xC1,QString(QChar(0x003B)));
        m_keymap.insert(0xC2,QString(QChar(0x0027)));
        m_keymap.insert(0xC7,QString(QChar(0x00A9)));
        m_keymap.insert(0xC7,QString(QChar(0x00A9)));
        m_keymap.insert(0xCC,QString(QChar(0x003C)));
        m_keymap.insert(0xCD,QString(QChar(0x003E)));
    }

    void addAccentKeysForVKB()
    {
        m_keymap.insert(0x5b,QString(QChar(0x103)));
        m_keymap.insert(0x5c,QString(QChar(0xE2)));
        m_keymap.insert(0x5d,QString(QChar(0xEE)));
        m_keymap.insert(0x3a,QString(QChar(0x15E)));
        m_keymap.insert(0x3b,QString(QChar(0x15F)));
        m_keymap.insert(0x27,QString(QChar(0x163)));
        m_keymap.insert(0x7b,QString(QChar(0x102)));
        m_keymap.insert(0x7c,QString(QChar(0xC2)));
        m_keymap.insert(0x7d,QString(QChar(0xCE)));
        m_keymap.insert(0x22,QString(QChar(0x162)));
    }

    void addCaronAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x65)),QString(QChar(0x011B)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x45)),QString(QChar(0x011A)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x72)),QString(QChar(0x0159)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x52)),QString(QChar(0x0158)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x74)),QString(QChar(0x0165)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x54)),QString(QChar(0x0164)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x7A)),QString(QChar(0x017E)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x5A)),QString(QChar(0x017D)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x73)),QString(QChar(0x0161)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x53)),QString(QChar(0x0160)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x64)),QString(QChar(0x010F)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x44)),QString(QChar(0x010E)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x63)),QString(QChar(0x010D)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x43)),QString(QChar(0x010C)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x6E)),QString(QChar(0x0148)));
        m_accentKeymap.insert(QString(QChar(0x02C7))+QString(QChar(0x4E)),QString(QChar(0x0147)));
    }

    void addCircumFlexAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x61)),QString(QChar(0xE2)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x65)),QString(QChar(0xEA)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x69)),QString(QChar(0xEE)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x6F)),QString(QChar(0xF4)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x75)),QString(QChar(0xFB)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x41)),QString(QChar(0xC2)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x45)),QString(QChar(0xCA)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x49)),QString(QChar(0xCE)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x4F)),QString(QChar(0xD4)));
        m_accentKeymap.insert(QString(QChar(0x5E))+QString(QChar(0x55)),QString(QChar(0xDB)));
    }

    void addBreveAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02D8))+QString(QChar(0x61)),QString(QChar(0x0103)));
        m_accentKeymap.insert(QString(QChar(0x02D8))+QString(QChar(0x41)),QString(QChar(0x0102)));
    }

    void addRingAboveAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02DA))+QString(QChar(0x75)),QString(QChar(0x016F)));
        m_accentKeymap.insert(QString(QChar(0x02DA))+QString(QChar(0x55)),QString(QChar(0x016E)));
    }

    void addOGONEKAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02DB))+QString(QChar(0x61)),QString(QChar(0x0105)));
        m_accentKeymap.insert(QString(QChar(0x02DB))+QString(QChar(0x41)),QString(QChar(0x0104)));
        m_accentKeymap.insert(QString(QChar(0x02DB))+QString(QChar(0x65)),QString(QChar(0x0119)));
        m_accentKeymap.insert(QString(QChar(0x02DB))+QString(QChar(0x45)),QString(QChar(0x0118)));
    }

    void addGraveAccentKeysForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x61)),QString(QChar(0xE0)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x65)),QString(QChar(0xE8)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x69)),QString(QChar(0xEC)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x6F)),QString(QChar(0xF2)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x75)),QString(QChar(0xF9)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x41)),QString(QChar(0xC0)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x45)),QString(QChar(0xC8)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x49)),QString(QChar(0xCC)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x4F)),QString(QChar(0xD2)));
        m_accentKeymap.insert(QString(QChar(0x60))+QString(QChar(0x55)),QString(QChar(0xD9)));
    }

    void addDotAboveAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02D9))+QString(QChar(0x7A)),QString(QChar(0x017C)));
        m_accentKeymap.insert(QString(QChar(0x02D9))+QString(QChar(0x5A)),QString(QChar(0x017B)));
    }

    void addAcuteAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x65)),QString(QChar(0x00E9)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x45)),QString(QChar(0x00C9)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x72)),QString(QChar(0x0155)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x52)),QString(QChar(0x0154)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x7A)),QString(QChar(0x017A)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x5A)),QString(QChar(0x0179)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x75)),QString(QChar(0x00FA)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x55)),QString(QChar(0x00DA)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x69)),QString(QChar(0x00ED)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x49)),QString(QChar(0x00CD)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x6F)),QString(QChar(0x00F3)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x4F)),QString(QChar(0x00D3)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x61)),QString(QChar(0x00E1)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x41)),QString(QChar(0x00C1)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x73)),QString(QChar(0x015B)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x53)),QString(QChar(0x015A)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x6C)),QString(QChar(0x013A)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x4C)),QString(QChar(0x0139)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x79)),QString(QChar(0x00FD)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x59)),QString(QChar(0x00DD)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x63)),QString(QChar(0x0107)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x43)),QString(QChar(0x0106)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x6E)),QString(QChar(0x0144)));
        m_accentKeymap.insert(QString(QChar(0x00B4))+QString(QChar(0x4E)),QString(QChar(0x0143)));
    }

    void addDoubleAcuteAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x02DD))+QString(QChar(0x75)),QString(QChar(0x0171)));
        m_accentKeymap.insert(QString(QChar(0x02DD))+QString(QChar(0x55)),QString(QChar(0x0170)));
        m_accentKeymap.insert(QString(QChar(0x02DD))+QString(QChar(0x6F)),QString(QChar(0x0151)));
        m_accentKeymap.insert(QString(QChar(0x02DD))+QString(QChar(0x4F)),QString(QChar(0x0150)));
    }

    void addDiaeresisAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x65)),QString(QChar(0x00EB)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x45)),QString(QChar(0x00CB)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x75)),QString(QChar(0x00FC)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x55)),QString(QChar(0x00DC)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x6F)),QString(QChar(0x00F6)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x4F)),QString(QChar(0x00D6)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x61)),QString(QChar(0x00E4)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x41)),QString(QChar(0x00C4)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x69)),QString(QChar(0x00EF)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x49)),QString(QChar(0x00CF)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x79)),QString(QChar(0x00FF)));
        m_accentKeymap.insert(QString(QChar(0x00A8))+QString(QChar(0x59)),QString(QChar(0x0178)));
    }

    void addCedillaAccentForHID()
    {
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x74)),QString(QChar(0x0163)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x54)),QString(QChar(0x0162)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x73)),QString(QChar(0x015F)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x53)),QString(QChar(0x015E)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x63)),QString(QChar(0x00E7)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x43)),QString(QChar(0x00C7)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x6E)),QString(QChar(0x0146)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x4E)),QString(QChar(0x0145)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x72)),QString(QChar(0x0157)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x52)),QString(QChar(0x0156)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x67)),QString(QChar(0x0123)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x47)),QString(QChar(0x0122)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x6B)),QString(QChar(0x0137)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x4B)),QString(QChar(0x0136)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x6C)),QString(QChar(0x013C)));
        m_accentKeymap.insert(QString(QChar(0x00B8))+QString(QChar(0x4C)),QString(QChar(0x013B)));
    }
};

#endif // ROMANIAN_AUTOMATA_H
