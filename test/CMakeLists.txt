# Copyright Takatoshi Kondo 2022
#
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

CMAKE_MINIMUM_REQUIRED (VERSION 3.13.0)

LIST (APPEND check_PROGRAMS
    test1.cpp
)

FOREACH (source_file ${check_PROGRAMS})
    GET_FILENAME_COMPONENT (source_file_we ${source_file} NAME_WE)
    ADD_EXECUTABLE (${source_file_we} ${source_file})
    TARGET_COMPILE_DEFINITIONS (${source_file_we} PUBLIC BOOST_TEST_DYN_LINK)
    TARGET_LINK_LIBRARIES (
        ${source_file_we} Boost::unit_test_framework
    )
    ADD_TEST (NAME ${source_file_we} COMMAND ${CMAKE_CURRENT_BINARY_DIR}/${source_file_we})
ENDFOREACH ()
