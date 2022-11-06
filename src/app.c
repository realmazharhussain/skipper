#include <adwaita.h>

#include "app.h"
#include "window.h"

struct _SkipperApplication
{
  AdwApplication parent;
};

G_DEFINE_TYPE (SkipperApplication, skipper_application, ADW_TYPE_APPLICATION);

static void activate (GApplication *self) {
  SkipperWindow *win = skipper_window_new (SKIPPER_APPLICATION (self));

  gtk_window_present (GTK_WINDOW (win));
}

static void skipper_application_class_init  (SkipperApplicationClass *klass) {
  G_APPLICATION_CLASS (klass)->activate = activate;
}

static void skipper_application_init (SkipperApplication *self) {}

SkipperApplication* skipper_application_new () {
  return g_object_new(SKIPPER_TYPE_APPLICATION,
                      "application-id", "io.github.realmazharhussain.Skipper",
                      NULL);
}
