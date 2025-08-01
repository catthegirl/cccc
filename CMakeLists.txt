cmake_minimum_required(VERSION 3.29)

project(CCCC)



add_library(cccc cccc.c)

target_sources(cccc PUBLIC cccc.h)

install(TARGETS cccc DESTINATION "cccc")   
