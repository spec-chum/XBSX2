/*  PCSX2 - PS2 Emulator for PCs
 *  Copyright (C) 2002-2022  PCSX2 Dev Team
 *
 *  PCSX2 is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with PCSX2.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#include "common/Pcsx2Defs.h"
#include "common/RedtapeWindows.h"
#include <array>
#include <cstring>
#include <map>
#include <optional>
#include <string_view>

namespace Win32KeyNames
{
	static const std::map<int, const char*> s_sdl_key_names = {
		{VK_RETURN, "Return"},
		{VK_ESCAPE, "Escape"},
		{VK_BACK, "Backspace"},
		{VK_TAB, "Tab"},
		{VK_SPACE, "Space"},
		{0xDE, "Apostrophe"},
		{0xBC, "Comma"},
		{0xBD, "Minus"},
		{0xBE, "Period"},
		{0xBF, "Slash"},
		{'0', "0"},
		{'1', "1"},
		{'2', "2"},
		{'3', "3"},
		{'4', "4"},
		{'5', "5"},
		{'6', "6"},
		{'7', "7"},
		{'8', "8"},
		{'9', "9"},
		{0xBA, "Semcolon"},
		{0xBB, "Equal"},
		{0xDB, "BracketLeft"},
		{0xDC, "Backslash"},
		{0xDD, "BracketRight"},
		{0xC0, "QuoteLeft"},
		{'A', "A"},
		{'B', "B"},
		{'C', "C"},
		{'D', "D"},
		{'E', "E"},
		{'F', "F"},
		{'G', "G"},
		{'H', "H"},
		{'I', "I"},
		{'J', "J"},
		{'K', "K"},
		{'L', "L"},
		{'M', "M"},
		{'N', "N"},
		{'O', "O"},
		{'P', "P"},
		{'Q', "Q"},
		{'R', "R"},
		{'S', "S"},
		{'T', "T"},
		{'U', "U"},
		{'V', "V"},
		{'W', "W"},
		{'X', "X"},
		{'Y', "Y"},
		{'Z', "Z"},
		{VK_CAPITAL, "CapsLock"},
		{VK_F1, "F1"},
		{VK_F2, "F2"},
		{VK_F3, "F3"},
		{VK_F4, "F4"},
		{VK_F5, "F5"},
		{VK_F6, "F6"},
		{VK_F7, "F7"},
		{VK_F8, "F8"},
		{VK_F9, "F9"},
		{VK_F10, "F10"},
		{VK_F11, "F11"},
		{VK_F12, "F12"},
		{VK_PRINT, "Print"},
		{VK_SCROLL, "ScrollLock"},
		{VK_PAUSE, "Pause"},
		{VK_INSERT, "Insert"},
		{VK_HOME, "Home"},
		{VK_PRIOR, "PageUp"},
		{VK_DELETE, "Delete"},
		{VK_END, "End"},
		{VK_NEXT, "PageDown"},
		{VK_RIGHT, "Right"},
		{VK_LEFT, "Left"},
		{VK_DOWN, "Down"},
		{VK_UP, "Up"},
		{VK_NUMLOCK, "NumLock"},
		{VK_DIVIDE, "KeypadDivide"},
		{VK_MULTIPLY, "KeypadMultiply"},
		{VK_SUBTRACT, "KeypadMinus"},
		{VK_ADD, "KeypadPlus"},
		//{VK_KP_ENTER, "KeypadReturn"},
		{VK_NUMPAD1, "Keypad1"},
		{VK_NUMPAD2, "Keypad2"},
		{VK_NUMPAD3, "Keypad3"},
		{VK_NUMPAD4, "Keypad4"},
		{VK_NUMPAD5, "Keypad5"},
		{VK_NUMPAD6, "Keypad6"},
		{VK_NUMPAD7, "Keypad7"},
		{VK_NUMPAD8, "Keypad8"},
		{VK_NUMPAD9, "Keypad9"},
		{VK_NUMPAD0, "Keypad0"},
		{VK_SEPARATOR, "KeypadPeriod"},
		{VK_F13, "F13"},
		{VK_F14, "F14"},
		{VK_F15, "F15"},
		{VK_F16, "F16"},
		{VK_F17, "F17"},
		{VK_F18, "F18"},
		{VK_F19, "F19"},
		{VK_F20, "F20"},
		{VK_F21, "F21"},
		{VK_F22, "F22"},
		{VK_F23, "F23"},
		{VK_F24, "F24"},
		{VK_EXECUTE, "Execute"},
		{VK_HELP, "Help"},
		{VK_MENU, "Menu"},
		{VK_SELECT, "Select"},
		{VK_MEDIA_STOP, "Stop"},
		{VK_VOLUME_UP, "VolumeUp"},
		{VK_VOLUME_DOWN, "VolumeDown"},
		{VK_CANCEL, "Cancel"},
		{VK_CLEAR, "Clear"},
		{VK_PRIOR, "Prior"},
		{VK_SEPARATOR, "Separator"},
		{VK_CRSEL, "CrSel"},
		{VK_EXSEL, "ExSel"},
		{VK_LCONTROL, "LeftControl"},
		{VK_LSHIFT, "LeftShift"},
		{VK_LMENU, "LeftAlt"},
		{VK_LWIN, "Super_L"},
		{VK_RCONTROL, "RightCtrl"},
		{VK_RSHIFT, "RightShift"},
		{VK_RMENU, "RightAlt"},
		{VK_RWIN, "RightSuper"},
		{VK_MEDIA_NEXT_TRACK, "MediaNext"},
		{VK_MEDIA_PREV_TRACK, "MediaPrevious"},
		{VK_MEDIA_STOP, "MediaStop"},
		{VK_MEDIA_PLAY_PAUSE, "MediaPlay"},
		{VK_VOLUME_MUTE, "VolumeMute"},
		{VK_SLEEP, "Sleep"},
	};

	static const char* GetKeyName(DWORD key)
	{
		const auto it = s_sdl_key_names.find(key);
		return it == s_sdl_key_names.end() ? nullptr : it->second;
	}

	static std::optional<DWORD> GetKeyCodeForName(const std::string_view& key_name)
	{
		for (const auto& it : s_sdl_key_names)
		{
			if (key_name == it.second)
				return it.first;
		}

		return std::nullopt;
	}
} // namespace Win32KeyNames
