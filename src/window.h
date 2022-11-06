#pragma once

#include <adwaita.h>
#include "app.h"

G_BEGIN_DECLS

#define SKIPPER_TYPE_WINDOW (skipper_window_get_type())
G_DECLARE_FINAL_TYPE (SkipperWindow, skipper_window, SKIPPER, WINDOW, AdwApplicationWindow);

SkipperWindow* skipper_window_new (SkipperApplication *app);

G_END_DECLS
