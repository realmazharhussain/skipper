#include <adwaita.h>

#include "app.h"
#include "aboutwindow.h"

void
show_about_window (GtkWindow *parent_window)
{
    const char *developers[] = {"Mazhar Husain", NULL};
    const char *const *documenters = developers;
    const char *const *designers = developers;

    adw_show_about_window (parent_window,
                           "issue-url", "https://gitlab.com/envision/media-player/-/issues/new",
                           "website", "https://gitlab.com/envision/media-player",
                           "application-name", "Envision Media Player",
                           "copyright", "Copyright 2022 Mazhar Hussain",
                           "license-type", GTK_LICENSE_AGPL_3_0,
                           "developer-name", developers[0],
                           "version", "0.1.alpha",
                           "documenters", documenters,
                           "developers", developers,
                           "designers", designers,
                           NULL);
}
