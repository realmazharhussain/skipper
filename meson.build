project('skipper', 'vala', 'c',
        version: '0.1.alpha')

gnome = import('gnome')
adw_dep = dependency('libadwaita-1')
gst_dep = dependency('gstreamer-1.0')

subdir('src')

gnome.post_install(
     glib_compile_schemas: true,
    gtk_update_icon_cache: true,
  update_desktop_database: true,
)
