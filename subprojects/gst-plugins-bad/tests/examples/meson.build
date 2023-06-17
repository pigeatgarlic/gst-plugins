subdir('d3d11')
subdir('mediafoundation')
subdir('nvcodec')
subdir('qsv')

executable('playout',
  'playout.c',
  install: true,
  dependencies : [gstbase_dep, gstvideo_dep],
  c_args : ['-DGST_USE_UNSTABLE_API', ],
)
