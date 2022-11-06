#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define SKIPPER_TYPE_MY_LABEL (skipper_my_label_get_type())

G_DECLARE_FINAL_TYPE (SkipperMyLabel, skipper_my_label, SKIPPER, MY_LABEL, AdwBin);

SkipperMyLabel* skipper_my_label_new (void);

G_END_DECLS
