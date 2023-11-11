/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Allows to define on the flashing, which has to be manual, which side is left and right
// This allows to keep that config regarding to which half you plug the USB

#define EE_HANDS

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 300
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
//#define QUICK_TAP_TERM 0

#define ONESHOT_TIMEOUT 5000

// Activate Caps Word by pressing Left Shift + Right Shift: 
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

/*  Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          5
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       10
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    5
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      5
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64*/

/* 
// Reduce Compile Size
 #ifndef NO_DEBUG
    #define NO_DEBUG
 #endif // !NO_DEBUG
 #if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
    #define NO_PRINT
 #endif // !NO_PRINT
 */