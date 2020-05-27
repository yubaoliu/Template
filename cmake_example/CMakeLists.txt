cmake_minimum_required(VERSION 3.0)

# set the project name and version
project(Tutorial VERSION 2.0)

option(USE_MYMATH "Use tutorial provided math implementation" ON)
configure_file(include/TutorialConfig.h.in include/TutorialConfig.h)

# set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_TYPE "Release")

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(USE_MYMATH)
  add_subdirectory(MathFunctions)
  list(APPEND EXTRA_LIBS MathFunctions)
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Debug mode")
else (CMAKE_BUILD_TYPE STREQUAL "Release")
    message("Release mode")
endif()

# add the executable
add_executable(Tutorial src/tutorial.cpp)

target_link_libraries(Tutorial PUBLIC ${EXTRA_LIBS})

target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                        )

install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
        DESTINATION include
        )
