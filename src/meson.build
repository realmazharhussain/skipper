gresource_xml = files('skipper.gresource.xml')

blp_sources = files('window.blp',
                    'headerbar.blp',
                    )

blueprints = custom_target('blueprints',
  input: blp_sources,
  output: '.',
  command: [find_program('blueprint-compiler'), 'batch-compile', '@OUTPUT@', '@CURRENT_SOURCE_DIR@', '@INPUT@'],
)

resources = gnome.compile_resources('skipper-ui', gresource_xml,
  dependencies: blueprints,
)

sources = files('main.c',
                'app.c',
                'window.c',
                'mylabel.c',
                'headerbar.c',
                )

executable(meson.project_name(), sources, resources,
           dependencies : adw_dep,
           install: true)
