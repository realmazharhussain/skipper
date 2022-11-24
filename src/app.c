#include <adwaita.h>

#include "app.h"
#include "window.h"
#include "aboutwindow.h"

struct _SkipperApplication
{
  AdwApplication parent;
};

G_DEFINE_TYPE (SkipperApplication, skipper_application, ADW_TYPE_APPLICATION);


static void
activate (GApplication *self) {
  SkipperWindow *win = skipper_window_new (SKIPPER_APPLICATION (self));

  gtk_window_present (GTK_WINDOW (win));
}

static void
skipper_application_class_init  (SkipperApplicationClass *klass) {
  G_APPLICATION_CLASS (klass)->activate = activate;
}

static void
about_cb (SkipperApplication *self,
          GAction *action)
{
  GtkWindow *active_window = gtk_application_get_active_window ( GTK_APPLICATION (self));
  show_about_window (active_window);
}

static void
skipper_application_init (SkipperApplication *self) {
  GActionMap *action_map = G_ACTION_MAP (self);

  GSimpleAction *about = g_simple_action_new ("about", NULL);
  g_signal_connect_swapped (about, "activate", G_CALLBACK(about_cb), self);
  g_action_map_add_action (action_map, G_ACTION (about));
}

SkipperApplication*
skipper_application_new () {
  return g_object_new(SKIPPER_TYPE_APPLICATION,
                      "application-id", "io.github.realmazharhussain.Skipper",
                      NULL);
}
