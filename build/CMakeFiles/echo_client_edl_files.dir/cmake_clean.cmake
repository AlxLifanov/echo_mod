file(REMOVE_RECURSE
  "Client.edl.h"
  "_headers_/echo/Client.edl"
  "_headers_/echo/Client.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_client_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
