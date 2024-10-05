// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
#error "Custom config is being included"



#define MIRYOKU_CLIPBOARD_WIN

// custom_config.h

#pragma once

// Include the default Miryoku configuration
#include "../miryoku/miryoku.h"

// Define custom layer names
#undef MIRYOKU_LAYER_LIST
#define MIRYOKU_LAYER_LIST \
  MIRYOKU_X(BASE,   "Alphas") \
  MIRYOKU_X(EXTRA,  "Extra") \
  MIRYOKU_X(TAP,    "Tap") \
  MIRYOKU_X(BUTTON, "Button") \
  MIRYOKU_X(NAV,    "Navigation") \
  MIRYOKU_X(MOUSE,  "Mouse") \
  MIRYOKU_X(MEDIA,  "Media") \
  MIRYOKU_X(NUM,    "Numbers") \
  MIRYOKU_X(SYM,    "Symbols") \
  MIRYOKU_X(FUN,    "Functions")
