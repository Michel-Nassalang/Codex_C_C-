# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\testQt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\testQt_autogen.dir\\ParseCache.txt"
  "testQt_autogen"
  )
endif()
