#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define SKIPPER_TYPE_APPLICATION (skipper_application_get_type())
G_DECLARE_FINAL_TYPE (SkipperApplication, skipper_application, SKIPPER, APPLICATION, AdwApplication);

SkipperApplication* skipper_application_new ();

G_END_DECLS
