# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "MinSizeRel")
  file(REMOVE_RECURSE
  "CMakeFiles\\TekkiFi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TekkiFi_autogen.dir\\ParseCache.txt"
  "TekkiFi_autogen"
  )
endif()
