file(REMOVE_RECURSE
  "IPing.idl.h"
  "_headers_/echo/IPing.idl"
  "_headers_/echo/IPing.idl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_idl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
