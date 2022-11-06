project('skipper', 'c',
        version: '0.1.alpha')

gnome = import('gnome')
adw_dep = dependency('libadwaita-1')

subdir('src')

gnome.post_install(
     glib_compile_schemas: true,
    gtk_update_icon_cache: true,
  update_desktop_database: true,
)
