file(REMOVE_RECURSE
  "CPing.cdl.h"
  "_headers_/echo/CPing.cdl"
  "_headers_/echo/CPing.cdl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/echo_cdl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
