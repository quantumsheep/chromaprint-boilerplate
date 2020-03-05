set(KISSFFT_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/chromaprint/vendor/kissfft")
set(BUILD_SHARED_LIBS OFF)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/chromaprint")

set(DEPENDENCIES_HEADERS
  "${CMAKE_CURRENT_SOURCE_DIR}/chromaprint/src"

  PARENT_SCOPE
)
