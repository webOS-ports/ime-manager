// Copyright (c) 2015-2018 LG Electronics, Inc.
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

#ifndef GERMAN_AUTOMATA_H
#define GERMAN_AUTOMATA_H

#include "automatabase.h"
#include <QLocale>

class GermanAutomata : public AutomataBase
{

public:
    GermanAutomata()
    {
        m_accentSelect = false;
        m_accents.insert(QString(QChar(0x5E)));
        m_accents.insert(QString(QChar(0xB4)));
        m_accents.insert(QString(QChar(0x60)));

        addGraveAccentKeysForHID();
        addAcuteAccentKeysForHID();
        addCircumFlexAccentKeysForHID();

        addSymbolKeys();
        addNumberKeys();
        addShiftKeys();
        addNormalKeys();
        addAccentKeys();
        addAltKeysForHID();
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
        return new GermanAutomata();
    }

private:

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

    void addAcuteAccentKeysForHID()
    {
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x61)),QString(QChar(0xE1)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x65)),QString(QChar(0xE9)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x69)),QString(QChar(0xED)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x6F)),QString(QChar(0xF3)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x75)),QString(QChar(0xFA)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x79)),QString(QChar(0xFD)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x41)),QString(QChar(0xC1)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x45)),QString(QChar(0xC9)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x49)),QString(QChar(0xCD)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x4F)),QString(QChar(0xD3)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x55)),QString(QChar(0xDA)));
        m_accentKeymap.insert(QString(QChar(0xB4))+QString(QChar(0x59)),QString(QChar(0xDD)));
    }

    void addCircumFlexAccentKeysForHID()
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

    void addSymbolKeys()
    {
        m_keymap.insert(0x21,QString(QChar(0x21)));
        m_keymap.insert(0x22,QString(QChar(0x22)));
        m_keymap.insert(0x23,QString(QChar(0x23)));
        m_keymap.insert(0x24,QString(QChar(0x24)));
        m_keymap.insert(0x25,QString(QChar(0x25)));
        m_keymap.insert(0x26,QString(QChar(0x26)));
        m_keymap.insert(0x27,QString(QChar(0x27)));
        m_keymap.insert(0x28,QString(QChar(0x28)));
        m_keymap.insert(0x29,QString(QChar(0x29)));
        m_keymap.insert(0x2a,QString(QChar(0x2a)));
        m_keymap.insert(0x2b,QString(QChar(0x60)));
        m_keymap.insert(0x2c,QString(QChar(0x2c)));
        m_keymap.insert(0x2e,QString(QChar(0x2e)));
        m_keymap.insert(0x2f,QString(QChar(0x2f)));
        m_keymap.insert(0x3d,QString(QChar(0xB4)));
    }

    void addNumberKeys()
    {
        m_keymap.insert(0x30,QString(QChar(0x30)));
        m_keymap.insert(0x31,QString(QChar(0x31)));
        m_keymap.insert(0x32,QString(QChar(0x32)));
        m_keymap.insert(0x33,QString(QChar(0x33)));
        m_keymap.insert(0x34,QString(QChar(0x34)));
        m_keymap.insert(0x35,QString(QChar(0x35)));
        m_keymap.insert(0x36,QString(QChar(0x36)));
        m_keymap.insert(0x37,QString(QChar(0x37)));
        m_keymap.insert(0x38,QString(QChar(0x38)));
        m_keymap.insert(0x39,QString(QChar(0x39)));
    }

    void addShiftKeys()
    {
        m_keymap.insert(0x3a,QString(QChar(0x3a)));
        m_keymap.insert(0x3b,QString(QChar(0x3b)));
        m_keymap.insert(0x3c,QString(QChar(0x3c)));
        m_keymap.insert(0x3e,QString(QChar(0x3e)));
        m_keymap.insert(0x3f,QString(QChar(0x3f)));
        m_keymap.insert(0x40,QString(QChar(0x40)));
        m_keymap.insert(0x41,QString(QChar(0x41)));
        m_keymap.insert(0x42,QString(QChar(0x42)));
        m_keymap.insert(0x43,QString(QChar(0x43)));
        m_keymap.insert(0x44,QString(QChar(0x44)));
        m_keymap.insert(0x45,QString(QChar(0x45)));
        m_keymap.insert(0x46,QString(QChar(0x46)));
        m_keymap.insert(0x47,QString(QChar(0x47)));
        m_keymap.insert(0x48,QString(QChar(0x48)));
        m_keymap.insert(0x49,QString(QChar(0x49)));
        m_keymap.insert(0x4a,QString(QChar(0x4a)));
        m_keymap.insert(0x4b,QString(QChar(0x4b)));
        m_keymap.insert(0x4c,QString(QChar(0x4c)));
        m_keymap.insert(0x4d,QString(QChar(0x4d)));
        m_keymap.insert(0x4e,QString(QChar(0x4e)));
        m_keymap.insert(0x4f,QString(QChar(0x4f)));
        m_keymap.insert(0x50,QString(QChar(0x50)));
        m_keymap.insert(0x51,QString(QChar(0x51)));
        m_keymap.insert(0x52,QString(QChar(0x52)));
        m_keymap.insert(0x53,QString(QChar(0x53)));
        m_keymap.insert(0x54,QString(QChar(0x54)));
        m_keymap.insert(0x55,QString(QChar(0x55)));
        m_keymap.insert(0x56,QString(QChar(0x56)));
        m_keymap.insert(0x57,QString(QChar(0x57)));
        m_keymap.insert(0x58,QString(QChar(0x58)));
        m_keymap.insert(0x59,QString(QChar(0x5A)));
        m_keymap.insert(0x5a,QString(QChar(0x59)));
        m_keymap.insert(0x5b,QString(QChar(0x5b)));
        m_keymap.insert(0x5c,QString(QChar(0x5c)));
        m_keymap.insert(0x5d,QString(QChar(0x2b)));
        m_keymap.insert(0x5e,QString(QChar(0x5e)));
        m_keymap.insert(0x5f,QString(QChar(0x5f)));
    }

    void addNormalKeys()
    {
        m_keymap.insert(0x60,QString(QChar(0x5E)));
        m_keymap.insert(0x61,QString(QChar(0x61)));
        m_keymap.insert(0x62,QString(QChar(0x62)));
        m_keymap.insert(0x63,QString(QChar(0x63)));
        m_keymap.insert(0x64,QString(QChar(0x64)));
        m_keymap.insert(0x65,QString(QChar(0x65)));
        m_keymap.insert(0x66,QString(QChar(0x66)));
        m_keymap.insert(0x67,QString(QChar(0x67)));
        m_keymap.insert(0x68,QString(QChar(0x68)));
        m_keymap.insert(0x69,QString(QChar(0x69)));
        m_keymap.insert(0x6a,QString(QChar(0x6a)));
        m_keymap.insert(0x6b,QString(QChar(0x6b)));
        m_keymap.insert(0x6c,QString(QChar(0x6c)));
        m_keymap.insert(0x6d,QString(QChar(0x6d)));
        m_keymap.insert(0x6e,QString(QChar(0x6e)));
        m_keymap.insert(0x6f,QString(QChar(0x6f)));
        m_keymap.insert(0x70,QString(QChar(0x70)));
        m_keymap.insert(0x71,QString(QChar(0x71)));
        m_keymap.insert(0x72,QString(QChar(0x72)));
        m_keymap.insert(0x73,QString(QChar(0x73)));
        m_keymap.insert(0x74,QString(QChar(0x74)));
        m_keymap.insert(0x75,QString(QChar(0x75)));
        m_keymap.insert(0x76,QString(QChar(0x76)));
        m_keymap.insert(0x77,QString(QChar(0x77)));
        m_keymap.insert(0x78,QString(QChar(0x78)));
        m_keymap.insert(0x79,QString(QChar(0x7A)));
        m_keymap.insert(0x7a,QString(QChar(0x79)));
        m_keymap.insert(0x7b,QString(QChar(0x7b)));
        m_keymap.insert(0x7c,QString(QChar(0x7c)));
        m_keymap.insert(0x7d,QString(QChar(0x7d)));
        m_keymap.insert(0x7e,QString(QChar(0x7e)));
        m_keymap.insert(0x20,QString(QChar(0x20)));
    }

    void addAccentKeys()
    {
        m_keymap.insert(0x3B,QString(QChar(0xF6)));
        m_keymap.insert(0x27,QString(QChar(0xE4)));
        m_keymap.insert(0x2D,QString(QChar(0xDF)));
        m_keymap.insert(0x5B,QString(QChar(0xFC)));
        m_keymap.insert(0x22,QString(QChar(0xC4)));
        m_keymap.insert(0x3A,QString(QChar(0xD6)));
        m_keymap.insert(0x7B,QString(QChar(0xDC)));
    }

    void addAltKeysForHID()
    {
        m_keymap.insert(0xA1,QString(QChar(0xB2)));
        m_keymap.insert(0xA2,QString(QChar(0xB3)));
        m_keymap.insert(0xA6,QString(QChar(0x7B)));
        m_keymap.insert(0xA7,QString(QChar(0x5B)));
        m_keymap.insert(0xA8,QString(QChar(0x5D)));
        m_keymap.insert(0xA9,QString(QChar(0x7D)));
        m_keymap.insert(0xAA,QString(QChar(0x5C)));
        m_keymap.insert(0xAC,QString(QChar(0x40)));
        m_keymap.insert(0xAE,QString(QChar(0x20AC)));
        m_keymap.insert(0xCB,QString(QChar(0xB5)));
        m_keymap.insert(0xB7,QString(QChar(0x7E)));
    }
};

#endif // GERMAN_AUTOMATA_H
