#pragma once

#include <adwaita.h>
#include "window.h"

G_BEGIN_DECLS

#define SKIPPER_TYPE_HEADER_BAR (skipper_header_bar_get_type())

G_DECLARE_FINAL_TYPE (SkipperHeaderBar, skipper_header_bar, SKIPPER, HEADER_BAR, AdwBin);

SkipperHeaderBar* skipper_header_bar_new (void);

G_END_DECLS
