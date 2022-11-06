#include <adwaita.h>
#include "mylabel.h"

struct _SkipperMyLabel {
  AdwBin parent;
};

G_DEFINE_TYPE (SkipperMyLabel, skipper_my_label, ADW_TYPE_BIN);

static void
skipper_my_label_class_init (SkipperMyLabelClass *klass) {}

static void
skipper_my_label_init (SkipperMyLabel *self) {
  GtkWidget *label = gtk_label_new("My Label");
  adw_bin_set_child ( ADW_BIN(self), label);
}

SkipperMyLabel*
skipper_my_label_new () {
  return g_object_new (SKIPPER_TYPE_MY_LABEL, NULL);
}
