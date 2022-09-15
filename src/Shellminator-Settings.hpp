/*
 * Created on Aug 10 2020
 *
 * Copyright (c) 2020 - Daniel Hajnal
 * hajnal.daniel96@gmail.com
 * This file is part of the Shellminator project.
 * Modified 2022.05.08
*/

/*
MIT License

Copyright (c) 2020 Daniel Hajnal

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef SHELLMINATOR_SETTINGS_HPP_
#define SHELLMINATOR_SETTINGS_HPP_

#ifdef ARDUINO

#ifndef SHELLMINATOR_USE_ARDUINO_SERIAL

  #ifndef SHELLMINATOR_USE_ARDUINO_SERIAL
  #define SHELLMINATOR_USE_ARDUINO_SERIAL
  #endif
  
#endif

#if defined(ARDUINO_AVR_LEONARDO)

  #ifndef SHELLMINATOR_USE_ARDUINO_32U4_SERIAL
  #define SHELLMINATOR_USE_ARDUINO_32U4_SERIAL
  #endif

#endif

#if defined(ARDUINO_AVR_MICRO)

  #ifndef SHELLMINATOR_USE_ARDUINO_32U4_SERIAL
  #define SHELLMINATOR_USE_ARDUINO_32U4_SERIAL
  #endif

#endif

#endif

#ifdef ESP32

  #ifndef SHELLMINATOR_USE_WIFI_CLIENT
  #define SHELLMINATOR_USE_WIFI_CLIENT
  #endif

  #ifndef SHELLMINATOR_ENABLE_SEARCH_MODULE
  #define SHELLMINATOR_ENABLE_SEARCH_MODULE
  #endif

#endif

#ifdef ESP8266

  #ifndef SHELLMINATOR_USE_WIFI_CLIENT
  #define SHELLMINATOR_USE_WIFI_CLIENT
  #endif

  #ifndef SHELLMINATOR_ENABLE_SEARCH_MODULE
  #define SHELLMINATOR_ENABLE_SEARCH_MODULE
  #endif

#endif

#endif
