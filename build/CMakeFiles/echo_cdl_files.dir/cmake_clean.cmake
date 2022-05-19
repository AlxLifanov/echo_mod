file(REMOVE_RECURSE
  "Ping.cdl.h"
  "_headers_/echo/Ping.cdl"
  "_headers_/echo/Ping.cdl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_cdl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
