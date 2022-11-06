#include <adwaita.h>
#include "app.h"

int main(int argc, char *argv[]) {
  SkipperApplication *app = skipper_application_new();
  int status = g_application_run(G_APPLICATION(app), argc, argv);
  return status;
}
