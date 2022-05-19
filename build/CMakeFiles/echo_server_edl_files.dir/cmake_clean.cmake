file(REMOVE_RECURSE
  "Server.edl.h"
  "_headers_/echo/Server.edl"
  "_headers_/echo/Server.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_server_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
