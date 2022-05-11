deps = [
   dependency('libadwaita-1'),
   dependency('gstreamer-1.0'),
  ]

source_files = [
  'main.c',
  ]

skipper_exe = executable('skipper',
                sources: source_files,
           dependencies: deps,
                install: true,
            install_dir: get_option('prefix') / get_option('bindir'),
                        )
