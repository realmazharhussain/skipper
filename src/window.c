#include <adwaita.h>
#include "app.h"
#include "window.h"
#include "headerbar.h"
#include "macros.h"

struct _SkipperWindow {
  AdwApplicationWindow parent;
};

G_DEFINE_TYPE(SkipperWindow, skipper_window, ADW_TYPE_APPLICATION_WINDOW);

static void dispose (GObject *object) {
  SkipperWindow *self = SKIPPER_WINDOW (object);
  gtk_widget_dispose_template (GTK_WIDGET (self), SKIPPER_TYPE_WINDOW);
  G_OBJECT_CLASS (skipper_window_parent_class)->dispose (object);
}
static void skipper_window_class_init (SkipperWindowClass *klass) {
  gtk_widget_class_set_template_from_resource (GTK_WIDGET_CLASS (klass),
                                               SKIPPER_RESOURCE("window.ui"));
  G_OBJECT_CLASS (klass)->dispose = dispose;
}

static void skipper_window_init (SkipperWindow *self) {
  g_type_ensure (SKIPPER_TYPE_HEADER_BAR);
  gtk_widget_init_template (GTK_WIDGET (self));
}

SkipperWindow* skipper_window_new (SkipperApplication *app) {
  return g_object_new (SKIPPER_TYPE_WINDOW,
                       "application", app,
                       NULL);
}
