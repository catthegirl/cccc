cmake_minimum_required(VERSION 3.29)

project(CCCC)

include(CheckCompilerFlag)

add_library(cccc cccc.c)
target_sources(cccc PUBLIC cccc.h)

option(BUILD_TESTS "build state of the art tests for the cccc library" OFF)
if(BUILD_TESTS)
 add_executable(metricTests "tests/metricTests.c")
 add_dependencies(metricTests cccc)
 target_link_libraries(metricTests cccc m)
endif()

install(TARGETS cccc DESTINATION "cccc")
