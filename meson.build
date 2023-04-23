project('org.mashood.apps.mashibar', 'cpp')

executable(
  meson.project_name(),
  'include/modules/memory.hpp',
  'src/modules/memory.cpp',
  'include/modules/user.hpp',
  'src/modules/user.cpp',
  'include/module.hpp',
  'src/module.cpp',
  'include/bar.hpp',
  'src/bar.cpp',
  'include/client.hpp',
  'src/client.cpp',
  'include/utils.hpp',
  'src/utils.cpp',
  # 'include/components/label.hpp',
  # 'src/components/label.cpp',
  'src/main.cpp',
  dependencies: [
    dependency('gtkmm-4.0')
  ],
  install: true
)
