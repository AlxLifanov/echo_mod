file(REMOVE_RECURSE
  "Ping.idl.h"
  "_headers_/echo/Ping.idl"
  "_headers_/echo/Ping.idl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_idl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
