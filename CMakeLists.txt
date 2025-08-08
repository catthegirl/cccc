cmake_minimum_required(VERSION 3.29)

project(CCCC)

add_library(cccc cccc.c)

option(BUILD_TESTS "build state of the art tests for the cccc library")
if(BUILD_TESTS)
 add_executable(metricTests "tests/metricTests.c")
 add_dependencies(metricTests cccc)
endif()

target_sources(cccc PUBLIC cccc.h)

install(TARGETS cccc DESTINATION "cccc")
