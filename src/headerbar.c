#include <adwaita.h>
#include "headerbar.h"
#include "macros.h"

struct _SkipperHeaderBar {
  GtkWidget parent;
};

G_DEFINE_TYPE (SkipperHeaderBar, skipper_header_bar, ADW_TYPE_BIN);

static void dispose (GObject *object) {
  SkipperHeaderBar *self = SKIPPER_HEADER_BAR (object);
  gtk_widget_dispose_template (GTK_WIDGET (self), SKIPPER_TYPE_HEADER_BAR);
  G_OBJECT_CLASS (skipper_header_bar_parent_class)->dispose (object);
}

static void
skipper_header_bar_class_init (SkipperHeaderBarClass *klass) {
  gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass),
                                               SKIPPER_RESOURCE("headerbar.ui"));
  G_OBJECT_CLASS (klass)->dispose = dispose;
}

static void
skipper_header_bar_init (SkipperHeaderBar *self) {
  gtk_widget_init_template (GTK_WIDGET (self));
}

SkipperHeaderBar*
skipper_header_bar_new () {
  return g_object_new (SKIPPER_TYPE_HEADER_BAR, NULL);
}
